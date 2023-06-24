const const_start = /[A-Z]/;
const ident_start = /[a-z_\u{00a0}-\u{10ffff}]/u;
const ident_part = /[0-9A-Za-z_\u{00a0}-\u{10ffff}]/u;

module.exports = grammar({
  name: 'crystal',

  extras: $ => [/\s/],

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(optional($._statement)),

    _terminator: $ => choice(/\n/, ';'),

    _statements: $ =>
      choice(
        seq(
          repeat1(choice(seq($._statement, $._terminator), prec(-1, ';'))),
          optional($._statement),
        ),
        $._statement,
      ),

    _statement: $ => choice($.string, $.chained_string, $.nil, $.true, $.false),

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

    nil: $ => 'nil',

    true: $ => 'true',
    false: $ => 'false',

    identifier: $ => token(seq(ident_start, repeat(ident_part))),
  },
});
