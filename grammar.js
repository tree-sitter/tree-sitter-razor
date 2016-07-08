module.exports = grammar({
  name: 'razor',

  extras: $ => [
    /\s/
  ],

  rules: {
    document: $ => $._markup,

    _markup: $ => repeat(choice(
      $.tag,
      $._word,
      $._non_word,

      $.interpolated_expression,
      $.interpolated_if_statement,
      $.interpolated_while_statement,
      $.interpolated_code_block
      // other interpolated control flow statements ...
    )),

    tag: $ => seq($.open_tag, $._markup, $.close_tag),

    interpolated_expression: $ => seq('@', choice(
      $.identifier,
      $.simple_member_expression,
      seq('(', $._expression, ')')
    )),

    interpolated_if_statement: $ => seq(
      '@if', '(', $._expression, ')',
      '{', $._markup, '}'
    ),

    interpolated_while_statement: $ => seq(
      '@while', '(', $._expression, ')',
      '{', $._markup, '}'
    ),

    interpolated_code_block: $ => seq('@', '{', repeat($._statement), '}'),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.binary_expression,
      $.call_expression,
      $.member_expression
      // other types of expressions ...
    ),

    _statement: $ => choice(
      $.expression_statement
      // other statements ...
    ),

    expression_statement: $ => seq($._expression, ';'),

    binary_expression: $ => choice(
      prec.left(seq($._expression, '+', $._expression)),
      prec.left(seq($._expression, '-', $._expression))
      // other binary expressions ...
    ),

    call_expression: $ => seq($._expression, '(', commaSep($._expression), ')'),

    member_expression: $ => seq($._expression, '.', $.identifier),

    simple_member_expression: $ => seq(
      choice(
        $.identifier,
        $.simple_member_expression
      ),
      '.',
      $.identifier
    ),

    open_tag: $ => seq('<', $._tag_name, '>'),

    close_tag: $ => seq('</', $._tag_name, '>'),

    identifier: $ => (/\a[\a\d]*/),

    number: $ => (/\d+/),

    _word: $ => (/\a+/),

    _non_word: $ => (/[^\a]/),

    _tag_name: $ => (/\a+/)
  }
});

function commaSep (rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
