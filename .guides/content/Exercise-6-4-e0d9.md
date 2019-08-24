One way to evaluate $e^{-x^2}$ is to use the infinite series expansion

<center> $ e^{-x^2} = 1 - 2x + 3x^2/2! - 4x^3/3! + 5x^4/4! - ... $ </center>

In other words, we need to add up a series of terms where the $i$th term is equal to $(-1)^i(i+1) x^i / i!$.  Write a function named `Gauss()` that takes `x` and `n` as arguments and that returns the sum of the first `n` terms of the series.  You should not use `factorial()` or `pow()`.

{Run!}(sh .guides/bg.sh gcc code/ex6-4.c -o code/ex6-4 ./code/ex6-4 )