There are three **logical operators** in C: AND, OR and NOT, which are denoted by the symbols `\&\&`, `||` and `!`.  The semantics (meaning) of these operators is similar to their meaning in English.  For example `x > 0 \&\& x < 10` is true only if `x` is greater than zero AND less than 10.


`evenFlag || n%3 == 0` is true if *either* of the conditions is true, that is, if `evenFlag` is true OR the number is divisible by 3.

Finally, the NOT operator has the effect of negating or inverting a bool expression, so `!evenFlag` is true if `evenFlag` is false; that is, if the number is odd.


Logical operators often provide a way to simplify nested conditional statements.  For example, how would you write the following code using a single conditional?

```code
  if (x > 0) 
  {
      if (x < 10) 
      {
          printf ("x is a positive single digit.\n");
      }
  }
```