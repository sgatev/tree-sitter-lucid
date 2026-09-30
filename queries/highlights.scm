; Keywords are not reserved in Lucid: each is an identifier the parser
; recognises where one is expected, which is where these match it.
[
  "comp"
  "fun"
  "val"
  "mut"
  "Type"
] @keyword

; On a declaration or a parameter the mark is a node of its own, so that a
; declaration says in its tree whether a write can reach it.
(mutable_specifier) @keyword

[
  "if"
  "else"
  "loop"
  "return"
  "do"
] @keyword.control

; The whole statement is the one token, so there is no word inside it.
(break_stmt) @keyword.control

[
  "and"
  "or"
] @keyword.operator

[
  "="
  "=="
  "!="
  ">"
  "<"
  ">="
  "<="
  "+"
  "-"
  "*"
  "/"
  "%"
  "!"
] @operator

[
  ","
  ":"
  "."
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(func_def name: (ident) @function)
(call_expr function: (ident) @function.call)

(param name: (ident) @variable.parameter)
(field_decl name: (ident) @variable.member)
(var_decl_stmt name: (ident) @variable)
(type_def name: (ident) @type)

(type (ident) @type)
(field_expr field: (ident) @variable.member)

(bool) @constant.builtin
(number) @number
(string) @string
(comment) @comment
