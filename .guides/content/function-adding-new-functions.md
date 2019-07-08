So far we have only been using the functions that are built into C, but it is also possible to add new functions.  Actually, we have already seen one function definition: `main()`.  The function named `main()` is special because it indicates where the execution of the program begins, but the syntax for `main()` is the same as for any other function definition:

```code
  void NAME ( LIST OF PARAMETERS ) 
  {
      STATEMENTS
  }
```
You can make up any name you want for your function, except that you can't call it `main` or any other C keyword.  The list of parameters specifies what information, if any, you have to provide in order to use (or **call**) the new function.

`main()` doesn't take any parameters, as indicated by the parentheses containing the keyword `(void)` in it's definition.  The first couple of functions we are going to write also have no parameters, so the syntax looks like this:

```code
  void PrintNewLine (void) 
  {
      printf ("\n");
  }
```
This function is named `PrintNewLine()`. It contains only a single statement, which outputs a newline character. Notice that we start the function name with an uppercase letter. The following words of the function name are also capitalized. We will use this convention for the naming  of functions consistently throughout the book.

In `main()` we can call this new function using syntax that is similar to the way we call the built-in C commands:

```code
  int main (void)
  {
     printf ("First Line.\n");
     PrintNewLine ();
     printf ("Second Line.\n");
     return EXIT_SUCCESS;
  }
```
The output of this program is: \vskip 0.5em

```code
   First line.

   Second line.
```
Notice the extra space between the two lines.  What if we wanted more space between the lines?  We could call the same function repeatedly:

```code
  int main (void)
  {
      printf ("First Line.\n");
      NewLine ();
      NewLine ();
      NewLine ();
      printf ("Second Line.\n");
  }
```
Or we could write a new function, named `PrintThreeLines()`, that  prints three new lines:

```code
  void PrintThreeLines (void)
  {
    PrintNewLine ();  PrintNewLine ();  PrintNewLine ();
  }

  int main (void)
  {
      printf ("First Line.\n");
      PrintThreeLines ();
      printf ("Second Line.\n");
      return EXIT_SUCCESS;
  }
```
You should notice a few things about this program:



*  You can call the same procedure repeatedly.  In fact, it is quite common and useful to do so.
*  You can have one function call another function.  In this case, `main()` calls `PrintThreeLines()` and `PrintThreeLines()` calls `PrintNewLine()`.  Again, this is common and useful.
*  In `PrintThreeLines()` I wrote three statements all on the same line, which is syntactically legal (remember that spaces and new lines usually don't change the meaning of a program). On the other hand, it is usually a better idea to put each statement on a line by itself, to make your program easy to read.  I sometimes break that rule in this book to save space. 

So far, it may not be clear why it is worth the trouble to create all these new functions.  Actually, there are a lot of reasons, but this example only demonstrates two:



1.  Creating a new function gives you an opportunity to give a name to a group of statements.  Functions can simplify a program by hiding a complex computation behind a single command, and by using English words in place of arcane code.  Which is clearer, `PrintNewLine()` or `printf("$\backslash$n")`?
1.  Creating a new function can make a program smaller by eliminating repetitive code.  For example, a short way to print nine consecutive new lines is to call `PrintThreeLines()` three times.  How would you print 27 new lines?