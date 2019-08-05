Computer programs operate on values stored in  computer memory. A value ---like a letter or a number--- is one of the fundamental things that a program manipulates.   The only values we have manipulated so far are the strings we have been outputting, like `"Hello, world."`.  You (and the compiler) can identify these string values because they are enclosed in quotation marks.

There are different kinds of values, including integers and characters. It is important for the program to know exactly what kind of value is manipulated because not all manipulations will make sense on all values. We therefore distinguish between different **types** of values.  

An integer is a whole number like 1 or 17.  You can output integer values in a similar way as you output strings:

```code
   printf("%i\n", 17);
```
{Run!}(sh .guides/bg.sh gcc code/values.c -o code/values ./code/values)
 When we look at the `printf()` statement more closely, we notice that the value we are outputting no longer appears inside the quotes, but behind them separated by comma. The string is still there, but now contains a `%i` instead of any text.  The `%i` a placeholder that tells the `printf()` command to print an integer value. Several such placeholders exist for different data types and formatting options of the output. We will see the next one just now.

A character value is a letter or digit or punctuation mark enclosed in single quotes, like `'a'` or `'5'`. You can output character values in a similar way:

```code
   printf("%c\n", '}');
```
{Run!}(sh .guides/bg.sh gcc code/values.c -o code/values ./code/values 2 )
 This example outputs a single closing curly-bracket on a line by itself. It uses the `%c` placeholder to signify the output of a character value.

It is easy to confuse different types of values, like `"5"`, `'5'` and `5`, but if you pay attention to the punctuation, it should be clear that the first is a string, the second is a character and the third is an integer.  The reason this distinction is important should become clear soon.