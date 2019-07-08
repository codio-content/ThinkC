In mathematics, you have probably seen functions like $\sin$ and $\log$, and you have learned to evaluate expressions like $\sin(\pi/2)$ and $\log(1/x)$.  First, you evaluate the expression in parentheses, which is called the **argument** of the function.  For example, $\pi/2$ is approximately 1.571, and $1/x$ is 0.1 (if $x$ happens to be 10).

Then you can evaluate the function itself, either by looking it up in a table or by performing various computations.  The $\sin$ of 1.571 is 1, and the $\log$ of 0.1 is -1 (assuming that $\log$ indicates the logarithm base 10).

This process can be applied repeatedly to evaluate more complicated expressions like $\log(1/\sin(\pi/2))$.  First we evaluate the argument of the innermost function, then evaluate the function, and so on.

C provides a set of built-in functions that includes most of the mathematical operations you can think of. The math functions are invoked using a syntax that is similar to mathematical notation:

```code
     double log = log (17.0);
     double angle = 1.5;
     double height = sin (angle);
```
The first example sets `log` to the logarithm of 17, base $e$.  There is also a function called `log10` that takes logarithms base 10.

The second example finds the sine of the value of the variable `angle`.  C assumes that the values you use with `sin` and the other trigonometric functions (`cos`, `tan`) are in *radians*.  To convert from degrees to radians, you can divide by 360 and multiply by $2 \pi$.  

If you don't happen to know $\pi$ to 15 digits, you can calculate it using the `acos` function.  The arccosine (or inverse cosine) of -1 is $\pi$, because the cosine of $\pi$ is -1.

```code
  const double PI = acos(-1.0);
  double degrees = 90;
  double angle = degrees * 2 * PI / 360.0;
```
Before you can use any of the math functions, you have to include the math **header file**.  Header files contain information the compiler needs about functions that are defined outside your program.  For example, in the “Hello, world!” program we included a header file named `stdio.h` using an **include** statement:

```code
#include <stdio.h>
```
`stdio.h` contains information about input and output (I/O) functions available in C.


Similarly, the math header file contains information about the math functions.  You can include it at the beginning of your program along with `stdio.h`:

```code
#include <math.h>
```