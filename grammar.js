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
        $.identifier,
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
          seq('0b', repeat(choice('0', '1', '_'))),
          seq('0o', repeat(/[0-7_]/)),
          seq('0x', repeat(/[a-fA-F0-9_]/)),
          seq(/[1-9]/, repeat(/[0-9_]/)),
          choice('0', seq('0_', repeat(/[0-9_]/))),
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

    identifier: $ => token(seq(ident_start, repeat(ident_part))),
  },
});
