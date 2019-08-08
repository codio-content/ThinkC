The purpose of this exercise is to take code from a previous exercise
and encapsulate it in a function that takes parameters.  You should
start with a working solution to exercise 2.1

1.  Write a function called `PrintDateAmerican()` that takes the day, month and year as parameters and that prints them in American format.

1.  Test your function by invoking it from `main()` and passing appropriate arguments.  The output should look something like this (except that the date might be different): ```code 3/29/2009 ```

1.  Once you have debugged `PrintDateAmerican()`, write another function called `PrintDateEuropean()` that prints the date in European format.

{Run!}(sh .guides/bg.sh gcc code/MyDate.c -o code/MyDate ./code/MyDate)