Some of the built-in functions we have used, like the math functions, have produced results.  That is, the effect of calling the function is to generate a new value, which we usually assign to a variable or use as part of an expression. For example:


```code
   double e = exp (1.0);
   double height = radius * sin (angle);
```
But so far all the functions we have written have been **void** functions; that is, functions that return no value.  When you call a void function, it is typically on a line by itself, with no assignment:

```code
   PrintLines (3);
   Countdown (n-1);
```
In this chapter, we are going to write functions that return things, which I will refer to as **fruitful** functions, for want of a better name.  The first example is `area`, which takes a `double` as a parameter, and returns the area of a circle with the given radius:


```code
  double Area (double radius) 
  {
      double pi = acos (-1.0);
      double area = pi * radius * radius;
      return area;
  }
```
The first thing you should notice is that the beginning of the function definition is different.  Instead of `void`, which indicates a void function, we see `double`, which indicates that the return value from this function will have type `double`.

Also, notice that the last line is an alternate form of the `return` statement that includes a return value.  This statement means, “return immediately from this function and use the following expression as a return value.”  The expression you provide can be arbitrarily complicated, so we could have written this function more concisely:

```code
  double Area (double radius) 
  {
      return acos(-1.0) * radius * radius;
  }
```
On the other hand, **temporary** variables like `area` often make debugging easier.  In either case, the type of the expression in the `return` statement must match the return type of the function. In other words, when you declare that the return type is `double`, you are making a promise that this function will eventually produce a `double`.  If you try to `return` with no expression, or an expression with the wrong type, the compiler will take you to task.


Sometimes it is useful to have multiple return statements, one in each branch of a conditional:

```code
  double AbsoluteValue (double x) 
  {
      if (x < 0) 
      {
          return -x;
      } 
      else 
      {
          return x;
      }
  }
```
Since these returns statements are in an alternative conditional, only one will be executed.  Although it is legal to have more than one `return` statement in a function, you should keep in mind that as soon as one is executed, the function terminates without executing any subsequent statements.

Code that appears after a `return` statement, or any place else where it can never be executed, is called **dead code**.  Some compilers warn you if part of your code is dead.


If you put return statements inside a conditional, then you have to guarantee that *every possible path* through the program hits a return statement.  For example:

```code
  double AbsoluteValue (double x) 
  {
      if (x < 0) 
      {
           return -x;
      } 
      else if (x > 0) 
      {
          return x;
      }                          /* WRONG!! */
}
```
This program is not correct because if `x` happens to be 0, then neither condition will be true and the function will end without hitting a return statement.  Unfortunately, many C compilers do not catch this error.  As a result, the program may compile and run, but the return value when `x==0` could be anything, and will probably be different in different environments.


By now you are probably sick of seeing compiler errors, but as you gain more experience, you will realize that the only thing worse than getting a compiler error is *not* getting a compiler error when your program is wrong.

Here's the kind of thing that's likely to happen: you test `AbsoluteValue()` with several values of `x` and it seems to work correctly.  Then you give your program to someone else and they run it in another environment.  It fails in some mysterious way, and it takes days of debugging to discover that the problem is an incorrect implementation of `AbsoluteValue()`.  If only the compiler had warned you!


From now on, if the compiler points out an error in your program, you should not blame the compiler.  Rather, you should thank the compiler for finding your error and sparing you days of debugging.  Some compilers have an option that tells them to be extra strict and report all the errors they can find.  You should turn this option on all the time.


As an aside, you should know that there is a function in the math library called `fabs()` that calculates the absolute value of a `double` -- correctly.