/**
 * @file Lucid grammar for tree-sitter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />

// Loosest first, as in the language: `or` gives way to `and`, `and` to the
// comparisons, and those to the arithmetic. `!` and `comp` bind tighter than
// all of them, because each takes one element rather than an expression.
const PREC = {
  or: 1,
  and: 2,
  compare: 3,
  add: 4,
  multiply: 5,
  prefix: 6,
  // A suffix binds tightest of all: with the commas of an argument list
  // optional, `f(a (b))` could be two arguments or one call, and the
  // language reads a `(` after a name as the call it would be.
  suffix: 7,
};

// A parenthesised list whose commas are optional, as they are in the
// language.
function commaList(item) {
  return seq('(', repeat(seq(item, optional(','))), ')');
}

module.exports = grammar({
  name: 'lucid',

  // Keywords are not reserved in Lucid: they are identifiers the parser
  // recognises where one is expected. Extracting them from `ident` is what
  // keeps `android` one identifier rather than `and` and `roid`.
  word: $ => $.ident,

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat($._definition),

    comment: _ => token(seq('#', /.*/)),

    _definition: $ => choice($.func_def, $.type_def),

    func_def: $ => seq(
      optional('comp'),
      'fun',
      field('name', $.ident),
      $.params,
      ':',
      field('result', $.type),
      field('body', $.block),
    ),

    // A type definition is the one place `Type` is a word of its own.
    type_def: $ => seq(
      optional('comp'),
      'val',
      field('name', $.ident),
      ':',
      'Type',
      '=',
      $.fields,
    ),

    // The commas are optional, as they are in the language.
    params: $ => commaList($.param),

    // A `mut` says the body may write to the parameter. What is written is
    // the function's own copy, so it says nothing to the caller.
    param: $ => seq(
      optional($.mutable_specifier),
      field('name', $.ident),
      ':',
      field('type', $.type),
    ),

    fields: $ => commaList($.field_decl),

    // A field takes no `mut`: it is not a binding anything writes through,
    // and a write to one is allowed by the `mut` on what holds the tuple.
    field_decl: $ => seq(field('name', $.ident), ':', field('type', $.type)),

    // The mark that says a write can reach what it stands on.
    mutable_specifier: _ => 'mut',

    type: $ => seq($.ident, optional(seq('[', $.number, ']'))),

    block: $ => seq('{', repeat($._statement), '}'),

    _statement: $ => choice(
      $.var_decl_stmt,
      $.assign_stmt,
      $.if_stmt,
      $.loop_stmt,
      $.break_stmt,
      $.return_stmt,
      $.do_stmt,
    ),

    var_decl_stmt: $ => seq(
      optional($.mutable_specifier),
      'val',
      field('name', $.ident),
      ':',
      field('type', $.type),
      optional(seq('=', field('value', $._expression))),
    ),

    // An assignment opens with the same `mut` the declaration of what it
    // writes carries. A `val` after it would make it a declaration instead.
    assign_stmt: $ => seq(
      'mut',
      field('target', $._assign_target),
      '=',
      field('value', $._expression),
    ),

    _assign_target: $ => choice($.ident, $.index_expr, $.field_expr),

    if_stmt: $ => seq(
      'if',
      field('condition', $._expression),
      field('consequence', $.block),
      optional(seq('else', field('alternative', choice($.if_stmt, $.block)))),
    ),

    loop_stmt: $ => seq('loop', $.block),

    break_stmt: _ => 'break',

    return_stmt: $ => seq('return', field('value', $._expression)),

    do_stmt: $ => seq('do', field('value', $._expression)),

    _expression: $ => choice(
      $.ident,
      $.number,
      $.string,
      $.bool,
      $.call_expr,
      $.index_expr,
      $.field_expr,
      $.unary_expr,
      $.comp_expr,
      $.binary_expr,
      $.paren_expr,
    ),

    paren_expr: $ => seq('(', $._expression, ')'),

    // The commas are optional here too.
    call_expr: $ => prec(PREC.suffix, seq(
      field('function', $.ident),
      '(',
      repeat(seq($._expression, optional(','))),
      ')',
    )),

    // An index and a field access take what came before them as their base,
    // and as many of them follow as are written.
    index_expr: $ => prec.left(PREC.suffix, seq(
      field('base', $._expression),
      '[',
      field('index', $._expression),
      ']',
    )),

    field_expr: $ => prec.left(PREC.suffix, seq(
      field('base', $._expression),
      '.',
      field('field', $.ident),
    )),

    unary_expr: $ => prec(PREC.prefix, seq(
      field('operator', '!'),
      field('operand', $._expression),
    )),

    // Asks for the value of what follows it during compilation. Like `!`, it
    // takes the one element after it, so `comp f() + n` adds at run time
    // what `f` came to while compiling.
    comp_expr: $ => prec(PREC.prefix, seq(
      'comp',
      field('value', $._expression),
    )),

    binary_expr: $ => choice(
      ...[
        ['or', PREC.or],
        ['and', PREC.and],
        ['==', PREC.compare],
        ['!=', PREC.compare],
        ['>=', PREC.compare],
        ['<=', PREC.compare],
        ['>', PREC.compare],
        ['<', PREC.compare],
        ['+', PREC.add],
        ['-', PREC.add],
        ['*', PREC.multiply],
        ['/', PREC.multiply],
        ['%', PREC.multiply],
      ].map(([operator, precedence]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))),
    ),

    bool: _ => choice('true', 'false'),

    ident: _ => /[a-zA-Z_][a-zA-Z_0-9]*/,

    number: _ => /[0-9]+/,

    // A string runs to the next quote, which it therefore cannot hold, and
    // may run across lines.
    string: _ => /"[^"]*"/,
  },
});
