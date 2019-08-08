The syntax for declaring and invoking functions with multiple parameters is a common source of errors.  First, remember that you have to declare the type of every parameter.  For example

```code
  void PrintTime (int hour, int minute) 
  {
    printf ("%i", hour);
    printf (":");
    printf ("%i", minute);
  }
```
It might be tempting to write `(int hour, minute)`, but that format is only legal for variable declarations, not for parameters.

Another common source of confusion is that you do not have to declare the types of arguments.  The following is wrong!

```code
    int hour = 11;
    int minute = 59;
    PrintTime (int hour, int minute);   /* WRONG! */
```
In this case, the compiler can tell the type of `hour` and `minute` by looking at their declarations.  It is unnecessary and illegal to include the type when you pass them as arguments.  The correct syntax is `PrintTime (hour, minute);`.

{Run!}(sh .guides/bg.sh gcc code/multipleParameters.c -o code/multipleParameters ./code/multipleParameters)