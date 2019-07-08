Traditionally the first program people write in a new language is called “Hello, World.” because all it does is display the words “Hello, World.”  In C, this program looks like this:

```code
  #include <stdio.h>
  #include <stdlib.h>

  /* main: generate some simple output */

  int main(void)
  {
        printf("Hello, World.\n");
        return(EXIT_SUCCESS);
  }

```
Some people judge the quality of a programming language by the simplicity of the “Hello, World.” program.  By this standard, C does reasonably well.  Even so, this simple program  contains several features that are hard to explain  to beginning programmers. For now, we will ignore some of them,  like the first two lines.


The third line begins with `/*` and ends with  `*/`, which indicates that it is a **comment**.  A comment is a bit of English text that you can put in the middle of a program, usually to explain what the program does.  When the compiler sees a `/*`, it ignores everything from there until it finds the corresponding  `*/`.

In the forth line, you notice the word `main`.  `main` is a special name that indicates the place in the program where execution begins.  When the program runs, it starts by executing the first **statement** in `main()` and it continues, in order, until it gets to the last statement, and then it quits.



There is no limit to the number of statements that can be in  `main()`, but the example contains only two.  The first  is an **output** statement,  meaning that it displays or prints a message on the screen. The second statement tells the operating system that our program executed successfully.  

The statement that prints things on the screen is `printf()`, and the characters between the quotation marks will get printed. Notice the `\textbackslash n` after the  last character. This is a special character called *newline* that is appended at the end  of a line of text  and causes the cursor to move to the next line of the display.  The next time you output something, the new text appears on the next line. At the end of the statement there is a semicolon (`;`), which is required at the end of every statement.

There are a few other things you should notice about the syntax of this program.  First, C uses curly-brackets (\{ and \}) to group things together.  In this case, the output statement is enclosed in curly-brackets, indicating that it is *inside* the definition of `main()`.  Also, notice that the statement is indented, which helps to show visually which lines are inside the definition.

At this point it would be a good idea to sit down in front of a computer and compile and run this program.  The details of how to do that depend on your programming environment, this book  assumes that you know how to do it.

As I mentioned, the C compiler is very pedantic with syntax. If you make any errors when you type in the program, chances are that it will not compile successfully.  For example, if you misspell `stdio.h`, you might get an error message like the following:

```code
   hello_world.c:1:19: error: sdtio.h: No such file or directory
```
There is a lot of information on this line, but it is presented in a dense format that is not easy to interpret.  A more friendly compiler might say something like:



> “On line 1 of the source code file named hello\_world.c, you tried to
> include a header file named sdtio.h.  I didn't find anything
> with that name, but I did find something named stdio.h.  Is
> that what you meant, by any chance?”


Unfortunately, few compilers are so accommodating.  The compiler is not really very smart, and in most cases the error message you get will be only a hint about what is wrong.  It will take some time for you to learn to interpret different compiler messages.

Nevertheless, the compiler can be a useful tool for learning the syntax rules of a language.  Starting with a working program (like hello\_world.c), modify it in various ways and see what happens. If you get an error message, try to remember what the message says and what caused it, so if you see it again in the future you will know what it means.