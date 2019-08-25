The modulus operator works on integers (and integer expressions) and yields the *remainder* when the first operand is divided by the second.  In C, the modulus operator is a percent sign, `%`.  The syntax is exactly the same as for other operators:

```code
  int quotient = 7 / 3;
  int remainder = 7 % 3;
```

{Run!}(sh .guides/bg.sh gcc code/mod.c -o code/mod ./code/mod)

The first operator, integer division, yields 2.  The second operator yields 1.  Thus, 7 divided by 3 is 2 with 1 left over.

The modulus operator turns out to be surprisingly useful.  For example, you can check whether one number is divisible by another: if `x % y` is zero, then `x` is divisible by `y`.

Also, you can use the modulus operator to extract the rightmost digit or digits from a number.  For example, `x % 10` yields the rightmost digit of `x` (in base 10).  Similarly `x % 100` yields the last two digits.