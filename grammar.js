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

    _code: $ => repeat(choice(
      $._statement,
      $.tag
    )),

    tag: $ => seq($.open_tag, $._markup, $.close_tag),

    interpolated_expression: $ => seq('@', choice(
      $._simple_expression,
      seq('(', $._expression, ')')
    )),

    interpolated_if_statement: $ => seq(
      '@if', '(', $._expression, ')',
      '{', $._code, '}'
    ),

    interpolated_while_statement: $ => seq(
      '@while', '(', $._expression, ')',
      '{', $._code, '}'
    ),

    interpolated_code_block: $ => seq('@{', $._code, '}'),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.binary_expression,
      $.call_expression,
      $.member_expression
      // other types of expressions ...
    ),

    _simple_expression: $ => choice(
      $.simple_member_expression,
      $.simple_call_expression,
      $.identifier
    ),

    _statement: $ => choice(
      $.variable_declaration,
      $.expression_statement
      // other statements ...
    ),

    variable_declaration: $ => seq(
      $.type_specifier,
      $.identifier,
      optional(seq(
        '=',
        $._expression
      )),
      ';'
    ),

    type_specifier: $ => choice('var', $.identifier),

    expression_statement: $ => seq($._expression, ';'),

    binary_expression: $ => choice(
      prec.left(seq($._expression, '+', $._expression)),
      prec.left(seq($._expression, '-', $._expression))
      // other binary expressions ...
    ),

    call_expression: $ => seq($._expression, '(', commaSep($._expression), ')'),
    simple_call_expression: $ => seq($._simple_expression, '(', commaSep($._expression), ')'),

    member_expression: $ => seq($._expression, '.', $.identifier),
    simple_member_expression: $ => seq($._simple_expression, '.', $.identifier),

    open_tag: $ => seq('<', $._word, '>'),
    close_tag: $ => seq('</', $._word, '>'),

    string: $ => token(seq(
      '"',
      /[^"]*/,
      '"'
    )),

    identifier: $ => (/\a[\a\d]*/),

    number: $ => (/\d+/),

    _word: $ => (/\a+/),
    _non_word: $ => (/[^\a]/)
  }
});

function commaSep (rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
