It is a good idea to commit as many errors as you can think of, so that you see what error messages the compiler produces. Sometimes the compiler will tell you exactly what is wrong, and all you have to do is fix it.  Sometimes, though, the compiler will produce wildly misleading messages.  You will develop a sense for when you can trust the compiler and when you have to figure things out yourself.

1. Remove the closing curly-bracket (\}).

1. Remove the opening curly-bracket (\{).

1. Remove the `int` before `main`.

1. Instead of `main`, write `mian`.

1. Remove the closing `*/` from a comment.

1. Replace `printf` with `pintf`.

1. Delete one of the parentheses:  `(` or  `)`.  Add an extra one.

1. Delete the semicolon after the `return` statement.

{Run!}(sh .guides/bg.sh gcc code/hello-copy.c -o code/hello-copy ./code/hello-copy)