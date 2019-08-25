A two-dimensional table is a table where you choose a row and a column and read the value at the intersection.  A multiplication table is a good example.  Let's say you wanted to print a multiplication table for the values from 1 to 6.

A good way to start is to write a simple loop that prints the multiples of 2, all on one line.

```code
    int i = 1;
    while (i <= 6) 
    {
        printf("%i   ", i*2);
        i = i + 1;
    }
    printf("\n");
```
The first line initializes a variable named `i`, which is going to act as a counter, or **loop variable**.  As the loop executes, the value of `i` increases from 1 to 6, and then when `i` is 7, the loop terminates.  Each time through the loop, we print the value `2*i` followed by three spaces.  By omitting the  `\n` from the first output statement, we get  all the output on a single line.

{Run!}(sh .guides/bg.sh gcc code/multTable.c -o code/multTable ./code/multTable )

The output of this program is:

```code
    2   4   6   8   10   12
```
So far, so good.  The next step is to **encapsulate** and **generalize**.