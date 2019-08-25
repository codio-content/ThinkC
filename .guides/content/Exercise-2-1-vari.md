1.  Create a new program named `MyDate.c`.  Copy or type in something like the "Hello, World" program and make sure you can compile and run it.

    {Run!}(sh .guides/bg.sh gcc code/MyDate.c -o code/MyDate ./code/MyDate)

1.  Following the example in Section 2.5, write a program that creates variables named `day`, `month` and `year` What type is each variable? Assign values to those variables that represent today's date.

1.  Print the value of each variable on a line by itself.  This is an intermediate step that is useful for checking that everything is working so far.

    {Run!}(sh .guides/bg.sh gcc code/hello-copy.c -o code/hello-copy ./code/hello-copy)
    
1.  Modify the program so that it prints the date in standard American form: `mm/dd/yyyy`.

1.  Modify the program again so that the total output is: 
```
American format: 3/18/2009 
European format: 18.3.2009
```

The point of this exercise is to use the output function `printf` to display values with different types, and to practice developing programs gradually by adding a few statements at a time.
