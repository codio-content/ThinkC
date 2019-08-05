**Exercise 1.1:**

Computer scientists have the annoying habit of using common
English words to mean something different from their common
English meaning.  For example, in English, a statement and
a comment are pretty much the same thing, but when we are
talking about a program, they are very different.

The glossary at the end of each chapter is intended to highlight
words and phrases that have special meanings in computer science.
When you see familiar words, don't assume that you know what 
they mean!



1.  In computer jargon, what's the difference between a statement and a comment?
1.  What does it mean to say that a program is portable?
1.  What is an executable? 



**Exercise 1.2:**

Before you do anything else, find out how to compile and run a C
program in your environment.  Some environments provide sample programs
similar to the example in Section 1.5.



1.  Type in the “Hello World” program, then compile and run it.
1.  Add a second print statement that prints a second message after the “Hello World.”.  Something witty like, “How are you?” Compile and run the program again.
1.  Add a comment line to the program (anywhere) and recompile it.  Run the program again.  The new comment should not affect the execution of the program. 

This exercise may seem trivial, but it is the starting place for many of the programs we will work with.  In order to debug with confidence, you have to have confidence in your programming environment.  In some environments, it is easy to lose track of which program is executing, and you might find yourself trying to debug one program while you are accidentally executing another.  Adding (and changing) print statements is a simple way to establish the connection between the program you are looking at and the output when the program runs.




**Exercise 1.3:**

It is a good idea to commit as many errors as you can think of,
so that you see what error messages the compiler produces.
Sometimes the compiler will tell you exactly what is wrong, and all
you have to do is fix it.  Sometimes, though, the compiler will produce
wildly misleading messages.  You will develop a sense for when you can
trust the compiler and when you have to figure things out yourself.

\begin {enumerate}

\item Remove the closing curly-bracket (\}).

\item Remove the opening curly-bracket (\{).

\item Remove the `int` before `main`.

\item Instead of `main`, write `mian`.

\item Remove the closing `*/` from a comment.

\item Replace `printf` with `pintf`.


\item Delete one of the parentheses:  `(` or  `)`.  Add an extra one.

\item Delete the semicolon after the `return` statement.

\end {enumerate}