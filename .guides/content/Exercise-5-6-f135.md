The distance between two points $(x_1, y_1)$ and $(x_2, y_2)$ is

<center> $ Distance = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2} $ </center>

Please write a function named `Distance()` that takes four doubles as parameters---`x1`, `y1`, `x2` and `y2`---and that prints the distance between the points.

You should assume that there is a function named `SumSquares()` that calculates and returns the sum of the squares of its arguments. For example:

```
double x = SumSquares (3.0, 4.0);
```

would assign the value `25.0` to `x`.

{Run!}(sh .guides/bg.sh gcc code/ex5-6.c -o code/ex5-6 ./code/ex5-6)

The point of this exercise is to write a new function that uses an existing one.  You should write only one function: `Distance()`.  You should not write `SumSquares()` or `main()` and you should not invoke `Distance()`.
