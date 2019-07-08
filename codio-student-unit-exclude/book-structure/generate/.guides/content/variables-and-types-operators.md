**Operators** are special symbols that are used to represent simple computations like addition and multiplication.  Most of the operators in C do exactly what you would expect them to do, because they are common mathematical symbols.  For example, the operator for adding two integers is `+`.

The following are all legal C expressions whose meaning is more or less obvious:

```code
    1+1        hour-1       hour*60+minute     minute/60
```
**Expressions** can contain both variables names and values.  In each case the name of the variable is replaced with its value before the computation is performed.


Addition, subtraction and multiplication all do what you expect, but you might be surprised by division.  For example, the following program:

```code

  int hour, minute;
  hour = 11;
  minute = 59;
  printf ("Number of minutes since midnight: %i\n", hour*60 + minute);
  printf ("Fraction of the hour that has passed: %i\n", minute/60);

```
would generate the following output:

```code
    Number of minutes since midnight: 719
    Fraction of the hour that has passed: 0
```
The first line is what we expected, but the second line is odd.  The value of the variable `minute` is 59, and 59 divided by 60 is 0.98333, not 0.  The reason for the discrepancy is that C is performing **integer division**.


When both of the **operands** are integers (operands are the things operators operate on), the result must also be an integer, and by definition integer division always rounds *down*, even in cases like this where the next integer is so close.

A possible alternative in this case is to calculate a percentage rather than a fraction:

```code
    printf ("Percentage of the hour that has passed: ");
    printf ("%i\n", minute*100/60);
```
The result is:

```code
    Percentage of the hour that has passed: 98
```
Again the result is rounded down, but at least now the answer is approximately correct.  In order to get an even more accurate answer, we could use a different type of variable, called floating-point, that is capable of storing fractional values. We'll get to that in the next chapter.