The first step is to generate a large number of random values and store them in a array.  By “large number,” of course, I mean 20.  It's always a good idea to start with a manageable number, to help with debugging, and then increase it later.

The following function takes three arguments, an array of integers,  the size of the array and an upper bound for the random values.   It fills the array of `int`s with random values between 0 and `upperBound-1`.

```code
    void RandomizeArray (int array[], int length, int upperBound) 
    {
        int i;
        for (i = 0; i < length; i++) 
        {
            array[i] = rand() % upperBound;
        }
    }
```
The return type is `void`, which means that this function does not return any value to the calling function. To test this function, it is convenient to have a function that outputs the contents of a array.

```code
    void PrintArray (int array[], int length) 
    {
        int i;
        for (i = 0; i < length; i++) 
        {
            printf ("%i ",  array[i]);
        }
    }
```
The following code generates an array filled with random values and outputs it:

```code
    int r_array[20];
    int upperBound = 10;
    int length = sizeof(r_array) / sizeof(r_array[0]);
  
    RandomizeArray (r_array, length, upperBound);
    PrintArray (r_array, length);
```

On my machine the output is:

```code
3 6 7 5 3 5 6 2 9 1 2 7 0 9 3 6 0 6 2 6 
```
\nopagebreak

If these numbers are really random, we expect each digit to appear the same number of times---twice each.  In fact, the number 6 appears five times, and the numbers 4 and 8 never appear at all.

Do these results mean the values are not really uniform?  It's hard to tell.  With so few values, the chances are slim that we would get exactly what we expect.  But as the number of values increases, the outcome should be more predictable.

To test this theory, we'll write some programs that count the number of times each value appears, and then see what happens when we increase the number of elements in our array.