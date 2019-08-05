1.  Create a new program called `MyTime.c`.  From now on, I won't remind you to start with a small, working program, but you should.
1.  Following the example in Section 2.7, create variables named `hour`, `minute` and `second`, and assign them values that are roughly the current time.  Use a 24-hour clock, so that at 2pm the value of `hour` is 14.
1.  Make the program calculate and print the number of seconds since midnight.
1.  Make the program calculate and print the number of seconds remaining in the day.
1.  Make the program calculate and print the percentage of the day that has passed.
1.  Change the values of `hour`, `minute` and `second` to reflect the current time (I assume that some time has elapsed), and check to make sure that the program works correctly with different values.

{Run!}(sh .guides/bg.sh gcc code/MyTime.c -o code/MyTime ./code/MyTime)

The point of this exercise is to use some of the arithmetic operations, and to start thinking about compound entities like the time of day that are represented with multiple values.  Also, you might run into problems computing percentages with `ints`, which is the motivation for floating point numbers in the next chapter.

HINT: you may want to use additional variables to hold values temporarily during the computation.  Variables like this, that are used in a computation but never printed, are sometimes called intermediate or temporary variables.