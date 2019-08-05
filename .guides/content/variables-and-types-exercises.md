\setcounter{exercisenum}{0}

**Exercise 2.1:**



1.  Create a new program named `MyDate.c`.  Copy or type in something like the "Hello, World" program and make sure you can compile and run it.
1.  Following the example in Section 2.5, write a program that creates variables named `day`, `month` and `year` What type is each variable? Assign values to those variables that represent today's date.
1.  Print the value of each variable on a line by itself.  This is an intermediate step that is useful for checking that everything is working so far.
1.  Modify the program so that it prints the date in standard American form: `{\tt mm/dd/yyyy`}.
1.  Modify the program again so that the total output is: ```code American format: 3/18/2009 European format: 18.3.2009 ``` 

The point of this exercise is to use the output function `printf` to display values with different types, and to practice developing programs gradually by adding a few statements at a time.






**Exercise 2.2:**



1.  Create a new program called `MyTime.c`.  From now on, I won't remind you to start with a small, working program, but you should.
1.  Following the example in Section 2.7, create variables named `hour`, `minute` and `second`, and assign them values that are roughly the current time.  Use a 24-hour clock, so that at 2pm the value of `hour` is 14.
1.  Make the program calculate and print the number of seconds since midnight.
1.  Make the program calculate and print the number of seconds remaining in the day.
1.  Make the program calculate and print the percentage of the day that has passed.
1.  Change the values of `hour`, `minute` and `second` to reflect the current time (I assume that some time has elapsed), and check to make sure that the program works correctly with different values. 

The point of this exercise is to use some of the arithmetic operations, and to start thinking about compound entities like the time of day that are represented with multiple values.  Also, you might run into problems computing percentages with `ints`, which is the motivation for floating point numbers in the next chapter.

HINT: you may want to use additional variables to hold values temporarily during the computation.  Variables like this, that are used in a computation but never printed, are sometimes called intermediate or temporary variables.