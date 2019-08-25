One of the things loops are good for is generating tabular data.  For example, before computers were readily available, people had to calculate logarithms, sines and cosines, and other common mathematical functions by hand. To make that easier, there were books containing long tables where you could find the values of various functions. Creating these tables was slow and boring, and the result tended to be full of errors.

When computers appeared on the scene, one of the initial reactions was, “This is great!  We can use the computers to generate the tables, so there will be no errors.”  That turned out to be true (mostly), but shortsighted.  Soon thereafter computers and calculators were so pervasive that the tables became obsolete.

Well, almost.  It turns out that for some operations, computers use tables of values to get an approximate answer, and then perform computations to improve the approximation.  In some cases, there have been errors in the underlying tables, most famously in the table the original Intel Pentium used to perform floating-point division.

Although a “log table” is not as useful as it once was, it still makes a good example of iteration.  The following program outputs a sequence of values in the left column and their logarithms in the right column:

```code
  double x = 1.0;
  while (x < 10.0) 
  {
      printf ("%.0f\t%f\n", x ,log(x));
      x = x + 1.0;
  }
```
The sequence `\t` represents a **tab** character. The sequence `\n` represents a newline character.   They are so called *escape sequences* which are used to encode non-printable ASCII-characters. Escape sequences can be included anywhere in a string, although in these examples the sequence is the whole string.

A tab character causes the cursor to shift to the right until it reaches one of the **tab stops**, which are normally every eight characters.  As we will see in a minute, tabs are useful for making columns of text line up. A newline character causes the cursor to move on to the next line.  

{Run!}(sh .guides/bg.sh gcc code/logs.c -o code/logs ./code/logs )

The output of this program is:

```code
   1      0.000000
   2      0.693147
   3      1.098612
   4      1.386294
   5      1.609438
   6      1.791759
   7      1.945910
   8      2.079442
   9      2.197225
```
If these values seem odd, remember that the `log()` function uses base $e$.  Since powers of two are so important in computer science, we often want to find logarithms with respect to base 2.  To do that, we can use the following formula:

<center> $ \log_2 x = \frac {log_e x}{log_e 2} $ </center>

Changing the output statement to ` printf ("%.0f\t%f\n", x, log(x) / log(2.0)); ` yields:

```code
    1      0.000000
    2      1.000000
    3      1.584963
    4      2.000000
    5      2.321928
    6      2.584963
    7      2.807355
    8      3.000000
    9      3.169925
```

{Run!}(sh .guides/bg.sh gcc code/logs.c -o code/logs ./code/logs 2 )

We can see that 1, 2, 4 and 8 are powers of two, because their logarithms base 2 are round numbers.  If we wanted to find the logarithms of other powers of two, we could modify the program like this:

```code
    double x = 1.0;
    while (x < 100.0) 
    {
        printf ("%.0f\t%.0f\n", x, log(x) / log(2.0));
        x = x * 2.0;
    }
```
{Run!}(sh .guides/bg.sh gcc code/logs.c -o code/logs ./code/logs 3 )


Now instead of adding something to `x` each time through the loop, which yields an arithmetic sequence, we multiply `x` by something, yielding a **geometric** sequence. The result is:

```code
    1      0
    2      1
    4      2
    8      3
    16     4
    32     5
    64     6
```
Because we are using tab characters between the columns, the position of the second column does not depend on the number of digits in the first column.

Log tables may not be useful any more, but for computer scientists, knowing the powers of two is!  As an exercise, modify this program so that it outputs the powers of two up to 65536 (that's $2^{16}$).  Print it out and memorize it.