const const_start = /[A-Z]/,
  ident_start = /[a-z_\u{00a0}-\u{10ffff}]/u,
  ident_part = /[0-9A-Za-z_\u{00a0}-\u{10ffff}]/u;

const bracket_pairs = [
  ['(', ')', '\\)'],
  ['[', ']', '\\]'],
  ['{', '}', '\\}'],
  ['<', '>', '>'],
  ['|', '|', '\\|'],
];

module.exports = grammar({
  name: 'crystal',

  extras: $ => [/[\s\r\n]+/],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.percent_string, $._binary_operator],
    [$.regex_literal, $._binary_operator],
    [$.integer],
  ],

  rules: {
    source_file: $ => seq(optional($._statements)),

    _terminator: $ => choice(/\r?\n/, ';'),

    _statements: $ =>
      choice(
        seq(
          repeat1(choice(seq($._statement, $._terminator), prec(-1, ';'))),
          optional($._statement),
        ),
        $._statement,
      ),

    _statement: $ => choice($.class, $.module, $.def, $._expression),

    class: $ =>
      seq(
        'class',
        $.constant,
        optional(seq('<', $.constant)),
        $._terminator,
        optional($._statements),
        'end',
      ),

    module: $ =>
      seq('module', $.constant, $._terminator, optional($._statements), 'end'),

    def: $ => choice($.abstract_def, $.method_def),

    _base_def: $ =>
      prec.right(
        seq(
          'def',
          optional(field('class', seq(choice($.constant, $.self), '.'))),
          field('name', choice($.identifier, $._binary_operator)),
          optional(
            field(
              'params',
              seq(
                '(',
                seq(
                  $.method_param,
                  repeat(seq(',', $.method_param)),
                  optional(','),
                ),
                optional($.splat_param),
                optional($.double_splat_param),
                optional($.block_param),
                ')',
              ),
            ),
          ),
          optional(field('returns', seq(':', $.constant))),
          optional(
            field(
              'forall',
              seq('forall', $.constant, repeat(seq(',', $.constant))),
            ),
          ),
        ),
      ),

    abstract_def: $ =>
      seq(optional(choice('private', 'protected')), 'abstract', $._base_def),

    method_def: $ =>
      seq(
        optional(choice('private', 'protected')),
        $._base_def,
        repeat($._expression),
        'end',
      ),

    _expression: $ =>
      choice(
        $.binary_operation,
        $.string,
        $.regex_literal,
        $.nil,
        $.true,
        $.false,
        $.integer,
        $.float,
        $.array,
        $.hash,
        $.proc,
        $.char,
        $.symbol,
        $.instance_variable,
        $.class_variable,
        $.self,
        $.identifier,
        $.constant,
        $.comment,
      ),

    string: $ => choice($.quoted_string, $.percent_string),

    quoted_string: $ => seq('"', repeat(/[^"]/), '"'),

    // TODO: Allow nested brackets
    percent_string: $ =>
      choice(
        ...bracket_pairs.map(([start, end, escaped_end]) =>
          seq(
            '%',
            optional('q'),
            start,
            repeat(new RegExp(`[^${escaped_end}]`)),
            end,
          ),
        ),
      ),

    regex_literal: $ => seq('/', repeat(/[^\/]|\\\//), '/'),

    integer: $ =>
      seq(
        choice(
          '0',
          seq('0_', repeat(/[0-9_]/)),
          seq('0b', repeat(choice('0', '1', '_'))),
          seq('0o', repeat(/[0-7_]/)),
          seq('0x', repeat(/[a-fA-F0-9_]/)),
          seq(/[1-9]/, repeat(/[0-9_]/)),
        ),
        optional(
          choice(
            'i8',
            'i16',
            'i32',
            'i64',
            'i128',
            'u8',
            'u16',
            'u32',
            'u64',
            'u128',
          ),
        ),
      ),

    float: $ =>
      seq(
        choice('0', '0_', /[1-9]/),
        repeat(/[0-9_]/),
        '.',
        repeat1(/[0-9_]/),
        optional(
          seq(
            choice('e', 'E'),
            optional(choice('+', '-')),
            /[0-9_]/,
            repeat(/[0-9_]/),
          ),
        ),
        optional(choice('f32', 'f64')),
      ),

    nil: $ => 'nil',

    true: $ => 'true',
    false: $ => 'false',

    array: $ =>
      seq(
        '[',
        optional(
          choice(
            $._expression,
            seq($._expression, repeat(seq(',', $._expression))),
          ),
        ),
        ']',
        optional(seq('of', $.constant)),
      ),

    hash: $ =>
      choice(
        seq(
          '{',
          $._expression,
          '=>',
          $._expression,
          repeat(seq(',', $._expression, '=>', $._expression)),
          '}',
          optional(
            seq(
              'of',
              field('key_type', $.constant),
              '=>',
              field('value_type', $.constant),
            ),
          ),
        ),
        seq(
          '{',
          '}',
          'of',
          field('key_type', $.constant),
          '=>',
          field('value_type', $.constant),
        ),
      ),

    proc: $ =>
      seq(
        '->',
        optional(
          seq(
            '(',
            field(
              'params',
              seq($.proc_param, repeat(seq(',', $.proc_param))),
              optional(','),
            ),
            ')',
          ),
        ),
        optional(seq(':', field('return_type', $.constant))),
        $.block,
      ),

    proc_param: $ =>
      seq(
        field('name', $.identifier), // support class/instance vars
        optional(seq(':', field('type', $.constant))),
      ),

    method_param: $ =>
      seq(
        // repeat($.annotation),
        optional(field('external_name', $.identifier)),
        field('name', $.identifier), // support class/instance vars
        optional(seq(':', field('type', $.constant))),
        optional(seq('=', field('default_value', $._expression))),
      ),

    splat_param: $ =>
      seq(
        // repeat($.annotation),
        '*',
        field('name', $.identifier),
        optional(seq(':', field('type', $.constant))),
      ),

    double_splat_param: $ =>
      seq(
        // repeat($.annotation),
        '**',
        field('name', $.identifier),
        optional(seq(':', field('type', $.constant))),
      ),

    block_param: $ =>
      seq(
        // repeat($.annotation),
        '&',
        optional(field('name', $.identifier)),
        optional(seq(':', field('type', $.constant))),
      ),

    args: $ => seq($._expression),

    block: $ => choice($.brace_block, $.do_end_block),

    block_params: $ =>
      seq(
        '|',
        field('params', $.identifier, repeat(seq(',', $.identifier))),
        '|',
      ),

    brace_block: $ =>
      seq('{', optional($.block_params), optional($._statements), '}'),

    do_end_block: $ =>
      seq('do', optional($.block_params), optional($._statements), 'end'),

    char: $ =>
      seq(
        "'",
        choice(
          token.immediate(/[^\\]/),
          seq(
            '\\',
            choice(
              '0',
              '\\',
              "'",
              'a',
              'b',
              'e',
              'f',
              'n',
              'r',
              't',
              'v',
              choice(/u[0-9a-fA-F]{4}/, /u\{[0-9a-fA-F]{1,6}\}/),
            ),
          ),
        ),
        token.immediate("'"),
      ),

    symbol: $ => seq(':', choice($.identifier, $.string)),

    instance_variable: $ => seq('@', $.identifier),

    class_variable: $ => seq('@@', $.identifier),

    self: $ => token('self'),

    identifier: $ => token(seq(ident_start, repeat(ident_part))),

    constant: $ =>
      prec.right(
        seq(
          optional('::'),
          $._constant_segment,
          repeat(seq('::', $._constant_segment)),
        ),
      ),

    _constant_segment: $ => token(seq(const_start, repeat(ident_part))),

    comment: $ => seq('#', /.*/),

    // https://github.com/will/tree-sitter-crystal/blob/15597b307b18028b04d288561f9c29794621562b/grammar.js#L545
    binary_operation: $ =>
      prec.left(
        seq(
          $._expression,
          alias($._binary_operator, $.operator),
          $._expression,
        ),
      ),

    _binary_operator: $ =>
      choice(
        '+',
        '-',
        '*',
        '/',
        '%',
        '&',
        '|',
        '^',
        '**',
        '>>',
        '<<',
        '==',
        '!=',
        '<',
        '<=',
        '>',
        '>=',
        '<=>',
        '===',
        '=~',
      ),
  },
});
