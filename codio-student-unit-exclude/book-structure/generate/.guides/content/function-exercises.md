\setcounter{exercisenum}{0}


**Exercise 3.1:**

The point of this exercise is to practice reading code and to
make sure that you understand the flow of execution through
a program with multiple functions.



1.  What is the output of the following program?  Be precise about where there are spaces and where there are newlines. HINT: Start by describing in words what `Ping()` and `Baffle()` do when they are invoked. ```code #include <stdio.h> #include <stdlib.h> void Ping () { printf (".\n"); } void Baffle () { printf ("wug"); Ping (); } void Zoop () { Baffle (); printf ("You wugga "); Baffle (); } int main (void) { printf ("No, I "); Zoop (); printf ("I "); Baffle (); return EXIT_SUCCESS; } ```
1.  Draw a stack diagram that shows the state of the program the first time `Ping()` is invoked. 




**Exercise 3.2:**
The point of this exercise is to make sure you understand how
to write and invoke functions that take parameters.



1.  Write the first line of a function named `Zool()` that takes three parameters: an `int` and two `char`.
1.  Write a line of code that invokes `Zool()`, passing as arguments the value `11`, the letter `a`, and the letter `z`. 






**Exercise 3.3:**

The purpose of this exercise is to take code from a previous exercise
and encapsulate it in a function that takes parameters.  You should
start with a working solution to exercise



1.  Write a function called `PrintDateAmerican()` that takes the day, month and year as parameters and that prints them in American format.
1.  Test your function by invoking it from `main()` and passing appropriate arguments.  The output should look something like this (except that the date might be different): ```code 3/29/2009 ```
1.  Once you have debugged `PrintDateAmerican()`, write another function called `PrintDateEuropean()` that prints the date in European format. 



**Exercise 3.4:**

Many computations can be expressed concisely using the “multadd”
operation, which takes three operands and computes `a*b + c`.  Some
processors even provide a hardware implementation of this operation for
floating-point numbers.



1.  Create a new program called `Multadd.c`.
1.  Write a function called `Multadd()` that takes three `doubles` as parameters and that prints their multadditionization.
1.  Write a `main()` function that tests `Multadd()` by invoking it with a few simple parameters, like `1.0, 2.0, 3.0`, and then prints the result, which should be `5.0`.
1.  Also in `main()`, use `Multadd()` to compute the following value: $$ & \sin \frac{\pi}{4} + \frac{\cos \frac{\pi}{4}}{2} & $$
1.  Write a function called `Yikes()` that takes a double as a parameter and that uses `Multadd()` to calculate and print $$ x e^{-x} + \sqrt{1 - e^{-x}} $$ HINT: the Math function for raising $e$ to a power is `double exp(double x);`. 

In the last part, you get a chance to write a function that invokes a function you wrote.  Whenever you do that, it is a good idea to test the first function carefully before you start working on the second.  Otherwise, you might find yourself debugging two functions at the same time, which can be very difficult.

One of the purposes of this exercise is to practice pattern-matching: the ability to recognize a specific problem as an instance of a general category of problems.