Let's say you are given a number, $a$, and you want to find its square root.  One way to do that is to start with a very rough guess about the answer, $x_0$, and then improve the guess using the following formula:

<center> $ x_1 = (x_0 + a/x_0) / 2 $ </center>

For example, if we want to find the square root of 9, and we start with $x_0 = 6$, then $x_1 = (6 + 9/6) /2 = 15/4 = 3.75$, which is closer.

We can repeat the procedure, using $x_1$ to calculate $x_2$, and so on.  In this case, $x_2 = 3.075$ and $x_3 = 3.00091$. So that is converging very quickly on the right answer (which is 3).

Write a function called `SquareRoot` that takes a `double` as a parameter and that returns an approximation of the square root of the parameter, using this algorithm.  You may not use the `sqrt()` function from the `math.h` library.

As your initial guess, you should use $a/2$.  Your function should iterate until it gets two consecutive estimates that differ by less than 0.0001; in other words, until the absolute value of $x_n - x_{n-1}$ is less than 0.0001.  You can use the built-in `fabs()` function from the `math.h` library to calculate the absolute value.

{Run!}(sh .guides/bg.sh gcc code/ex6-3.c -o code/ex6-3 ./code/ex6-3 )