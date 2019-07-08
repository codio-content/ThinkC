The `return` statement allows you to terminate the execution of a function before you reach the end.  One reason to use it is if you detect an error condition:

```code
  #include <math.h>

  void PrintLogarithm (double x) 
  {
      if (x <= 0.0) 
      {
          printf ("Positive numbers only, please.\n");
          return;
      }

     double result = log (x);
     printf ("The log of x is %f\n", result);
  }
```
This defines a function named `PrintLogarithm()` that takes a `double` named `x` as a parameter.  The first thing it does is check whether `x` is less than or equal to zero, in which case it displays an error message and then uses `return` to exit the function.  The flow of execution immediately returns to the caller and the remaining lines of the function are not executed.

I used a floating-point value on the right side of the condition because there is a floating-point variable on the left.

Remember that any time you want to use one a function from the math library, you have to include the header file `math.h`.