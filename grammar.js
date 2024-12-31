module.exports = grammar({
  name: 'lucid',

  rules: {
    source_file: $ => repeat($.func),

    comment: _ => token(seq('#', /.*/)),

    func: $ => seq(
      'let',
      $.ident,
      '=',
      '(',
      commaSeparatedRepeat(
        seq($.ident, ':', $.type)
      ),
      ')',
      '->',
      $.type,
      $.body
    ),

    ident: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    type: $ => choice(
      $.ident,
      seq($.ident, '[', $.number, ']')
    ),

    body: $ => seq(
      '{',
      repeat($.stmt),
      '}'
    ),

    stmt: $ => choice(
      $.if_stmt,
      $.return_stmt,
      $.do_stmt,
      $.break_stmt,
      $.loop_stmt,
      $.var_decl_stmt,
      $.var_assign_stmt
    ),

    if_stmt: $ => seq(
      'if',
      $.expr,
      $.body,
      repeat(seq(
        'else',
        optional(
          seq('if', $.expr)
        ),
        $.body
      ))
    ),

    expr: $ => choice(
      $.ident,
      $.number,
      $.string,
      $.binary_expr,
      $.func_call,
      $.array_index
    ),

    number: $ => /([1-9][0-9]*|0)/,

    string: $ => /".*"/,

    binary_expr: $ => prec.left(seq(
      $.expr,
      $.binary_op,
      $.expr
    )),

    binary_op: $ => choice(
      '<',
      '>',
      '+',
      '-',
      '%',
      '=='
    ),

    return_stmt: $ => seq(
      'return',
      $.expr
    ),

    do_stmt: $ => seq(
      'do',
      $.expr
    ),

    break_stmt: $ => seq('break'),

    loop_stmt: $ => seq(
      'loop',
      $.body
    ),

    func_call: $ => seq(
      $.ident,
      '(',
      commaSeparatedRepeat($.expr),
      ')'
    ),

    var_decl_stmt: $ => seq(
      'let',
      $.ident,
      ':',
      $.type,
      '=',
      $.expr
    ),

    var_assign_stmt: $ => seq(
      choice(
        $.ident,
        $.array_index
      ),
      '=',
      $.expr
    ),

    array_index: $ => choice(
      seq($.ident, '[', $.expr, ']')
    )
  },
  extras: $ => [
    $.comment,
  ],
});

function commaSeparatedRepeat(rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
