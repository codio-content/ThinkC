Just as with mathematical functions, C functions can be **composed**, meaning that you use one expression as part of another. For example, you can use any expression as an argument to a function:

```code
    double x = cos (angle + PI/2);
```
This statement takes the value of `PI`, divides it by two and adds the result to the value of `angle`.  The sum is then passed as an argument to the `cos` function.

You can also take the result of one function and pass it as an argument to another:

```code
    double x = exp (log (10.0));
```
This statement finds the log base $e$ of 10 and then raises $e$ to that power.  The result gets assigned to `x`; I hope you know what it is.