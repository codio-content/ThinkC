Many computations can be expressed concisely using the “multadd” operation, which takes three operands and computes `a*b + c`.  Some processors even provide a hardware implementation of this operation for floating-point numbers.

1.  Write a function called `Multadd()` that takes three `doubles` as parameters and that prints their multadditionization.

1.  Write a `main()` function that tests `Multadd()` by invoking it with a few simple parameters, like `1.0, 2.0, 3.0`, and then prints the result, which should be `5.0`.

1.  Also in `main()`, use `Multadd()` to compute the following value: 

    $$ \sin \frac{\pi}{4} + \frac{\cos \frac{\pi}{4}}{2} $$

1.  Write a function called `Yikes()` that takes a double as a parameter and that uses `Multadd()` to calculate and print $$ x e^{-x} + \sqrt{1 - e^{-x}} $$ HINT: the Math function for raising $e$ to a power is `double exp(double x);`. 

{Run!}(sh .guides/bg.sh gcc code/Multadd.c -o code/Multadd ./code/Multadd)

In the last part, you get a chance to write a function that invokes a function you wrote.  Whenever you do that, it is a good idea to test the first function carefully before you start working on the second.  Otherwise, you might find yourself debugging two functions at the same time, which can be very difficult.

One of the purposes of this exercise is to practice pattern-matching: the ability to recognize a specific problem as an instance of a general category of problems.