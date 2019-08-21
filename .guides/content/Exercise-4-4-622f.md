Fermat's Last Theorem says that there are no integers $a$, $b$, and $c$ such that

$ a^n + b^n = c^n $ except in the case when $n=2$.

Write a function named `checkFermat()` that takes four integers as parameters--- `a`, `b`, `c`, and `n`---and that checks to see if Fermat's theorem holds.  If $n$ is greater than 2 and it turns out to be true that $a^n + b^n = c^n$, the program should print `Holy smokes, Fermat was wrong!` Otherwise the program should print `No, that doesn't work.`

You should assume that there is a function named `raiseToPow()` that takes two integers as arguments and that raises the first argument to the power of the second.  For example:

```
    int x = raiseToPow (2, 3);
```

would assign the value `8` to `x`, because $2^3 = 8$.

{Run!}(sh .guides/bg.sh gcc code/ex4-4.c -o code/ex4-4 ./code/ex4-4)