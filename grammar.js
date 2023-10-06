const const_start = /[A-Z]/,
  ident_start = /[a-z_\u{00a0}-\u{10ffff}]/u,
  ident_part = /[0-9A-Za-z_\u{00a0}-\u{10ffff}]/u,
  bracket_pairs = [
    ['(', ')', '\)'],
    ['[', ']', '\]'],
    ['{', '}', '\}'],
    ['<', '>', '>'],
    ['|', '|', '\|']
  ];

module.exports = grammar({
  name: 'crystal',

  extras: $ => [/[\s\r\n]+/],

  word: $ => $.identifier,

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

    _statement: $ =>
      choice(
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
            repeat(
              new RegExp(`[^${escaped_end}]`),
            ),
            end,
          )
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
            $._statement,
            seq($._statement, repeat(seq(',', $._statement))),
          ),
        ),
        ']',
        optional(seq('of', $.constant)),
      ),

    hash: $ =>
      choice(
        seq(
          '{',
          $._statement,
          '=>',
          $._statement,
          repeat(seq(',', $._statement, '=>', $._statement)),
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
              seq($.param, repeat(seq(',', $.param))),
              optional(','),
            ),
            ')',
          ),
        ),
        optional(seq(':', field('return_type', $.constant))),
        $.block,
      ),

    param: $ =>
      seq(
        // repeat($.annotation),
        optional(field('external_name', $.identifier)),
        field('name', $.identifier), // support class/instance vars
        optional(seq(':', field('type', $.constant))),
        optional(seq('=', field('default_value', $._statement))),
      ),

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

    symbol: $ =>
      seq(':', choice($.identifier, $.string)),

    instance_variable: $ =>
      seq("@", $.identifier),

    class_variable: $ =>
      seq("@@", $.identifier),

    self: $ =>
      token("self"),

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

    comment: $ =>
      seq("#", /.*/),
  },
});
