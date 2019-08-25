In order to write useful programs, we almost always need the ability to check certain conditions and change the behavior of the program accordingly.  **Conditional statements** give us this ability.  The simplest form is the `if` statement:

```code
  if (x > 0) 
  {
      printf ("x is positive\n");
  }
```
The expression in parentheses is called the condition. If it is true, then the statements in brackets get executed. If the condition is not true, nothing happens.

{Run!}(sh .guides/bg.sh gcc code/conditional.c -o code/conditional ./code/conditional)

The condition can contain any of the **comparison operators**:

```code
    x == y               /* x equals y */
    x != y               /* x is not equal to y */
    x > y                /* x is greater than y */
    x < y                /* x is less than y */
    x >= y               /* x is greater than or equal to y */
    x <= y               /* x is less than or equal to y */
```
Although these operations are probably familiar to you, the syntax C uses is a little different from mathematical symbols like $=$, $\neq$ and $\le$.  A common error is to use a single `=` instead of a double `==`.  Remember that `=` is the assignment operator, and `==` is a comparison operator.  Also, there is no such thing as `=<` or `=>`.

The two sides of a condition operator have to be the same type.  You can only compare `ints` to `ints` and `doubles` to `doubles`.  Unfortunately, at this point you can't compare strings at all!  There is a way to compare strings, but we won't get to it for a couple of chapters.