Encapsulation usually means taking a piece of code and wrapping it up in a function, allowing you to take advantage of all the things functions are good for.  We have seen two examples of encapsulation, when we wrote `PrintParity()` in Section 4.3 and `IsSingleDigit()` in Section 5.7.

Generalization means taking something specific, like printing multiples of 2, and making it more general, like printing the multiples of any integer.

Here's a function that encapsulates the loop from the previous section and generalizes it to print multiples of `n`.

```code
    void PrintMultiples (int n)
    {
        int i = 1;
        while (i <= 6) 
        {
            printf("%i   ", i*n);
            i = i + 1;
        }
        printf("\n");
    }
```
To encapsulate, all I had to do was add the first line, which declares the name, parameter, and return type.  To generalize, all I had to do was replace the value 2 with the parameter `n`.

If we call this function with the argument 2, we get the same output as before.  

{Run!}(sh .guides/bg.sh gcc code/multTable.c -o code/multTable ./code/multTable 2 )

With argument 3, the output is:

```code
    3   6   9   12   15   18
```
and with argument 4, the output is

```code
    4   8   12   16   20   24 
```
By now you can probably guess how we are going to print a multiplication table: we'll call `PrintMultiples()` repeatedly with different arguments.  In fact, we are going to use another loop to iterate through the rows.

```code
    int i = 1;
    while (i <= 6) 
    {
        PrintMultiples (i);
        i = i + 1;
    }    
```
First of all, notice how similar this loop is to the one inside `PrintMultiples()`.  I only replaced the call of the `printf()` function with  the call of the `PrintMultiples()` function.

{Run!}(sh .guides/bg.sh gcc code/multTable.c -o code/multTable ./code/multTable 3 )

The output of this program is

```code
    1   2   3   4   5   6   
    2   4   6   8   10   12   
    3   6   9   12   15   18   
    4   8   12   16   20   24   
    5   10   15   20   25   30   
    6   12   18   24   30   36   
```
which is a (slightly sloppy) multiplication table.  If the sloppiness bothers you, try replacing the spaces between columns with tab characters and see what you get.