const const_start = /[A-Z]/;
const ident_start = /[a-z_\u{00a0}-\u{10ffff}]/u;
const ident_part = /[0-9A-Za-z_\u{00a0}-\u{10ffff}]/u;

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
        $.chained_string,
        $.nil,
        $.true,
        $.false,
        $.integer,
        $.float,
        $.array,
        $.hash,
        $.proc,
        $.identifier,
        $.constant,
      ),

    string: $ => choice($.quoted_string, $.percent_string),

    chained_string: $ => seq($.string, repeat1($.string)),

    quoted_string: $ => seq('"', repeat(/[^"]/), '"'),

    // TODO: redo this lazy implementation
    percent_string: $ =>
      seq(
        '%',
        choice('(', '[', '{', '<', '|'),
        repeat(/[^)\]}>|]/),
        choice(')', ']', '}', '>', '|'),
      ),

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
        optional(field('return_type', seq(':', $.constant))),
        $.block,
      ),

    param: $ =>
      seq(
        // repeat($.annotation),
        optional(field('external_name', $.identifier)),
        field('name', $.identifier), // support class/instance vars
        optional(field('type', seq(':', $.constant))),
        optional(field('default_value', seq('=', $._statement))),
      ),

    block_params: $ =>
      seq(
        '|',
        field('params', $.identifier, repeat(seq(',', $.identifier))),
        '|',
      ),

    block: $ => choice($.brace_block, $.do_end_block),

    brace_block: $ =>
      seq('{', optional($.block_params), optional($._statements), '}'),

    do_end_block: $ =>
      seq('do', optional($.block_params), optional($._statements), 'end'),

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
  },
});
