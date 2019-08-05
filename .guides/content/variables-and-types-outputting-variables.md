You can output the value of a variable using the same commands we used to output simple values.

```code

    int hour, minute;
    char colon;

    hour = 11;
    minute = 59;
    colon = ':';

    printf ("The current time is ");
    printf ("%i", hour);
    printf ("%c", colon);
    printf ("%i", minute);
    printf ("\n"); 
  
```
{Run!}(sh .guides/bg.sh gcc code/output.c -o code/output ./code/output)
 This program creates two integer variables named `hour` and `minute`, and a character variable named `colon`.  It assigns appropriate values to each of the variables and then uses a series of output statements to generate the following:

```code
    The current time is 11:59
```

When we talk about “outputting a variable,” we mean outputting the *value* of the variable.  The name of a variable only has significance for the programmer. The compiled program no longer contains a human readable reference to the variable name in your program. 

The ` printf()` command is capable of outputting several variables in a single statement. To do this, we need to put placeholders in the so called *format string*, that indicate the position where the variable value will be put. The variables will be inserted in the order of their appearance in  the statement. It is important to observe the right order and type for the variables.

By using a single output statement, we can make the previous program more concise:

```code
    
    int hour, minute;
    char colon;

    hour = 11;
    minute = 59;
    colon = ':';

    printf ("The current time is %i%c%i\n", hour, colon, minute);
    
```
{Run!}(sh .guides/bg.sh gcc code/output.c -o code/output ./code/output 2 )
 On one line, this program outputs a string, two integers and a character.  Very impressive!