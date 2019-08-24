`HowMany()` only counts the occurrences of a particular value, and we are interested in seeing how many times each value appears. We can solve that problem with a loop:

```code
    int i;
    int r_array[20];
    int upperBound = 10;
    int length = sizeof(r_array) / sizeof(r_array[0]);
  
    RandomizeArray(r_array, length, upperBound);

    printf ("value\tHowMany\n");
    for (i = 0; i < upperBound; i++) 
    {
        printf("%i\t%i\n", i, HowMany(r_array, length, i));
    }
```


This code uses the loop variable as an argument to `HowMany()`, in order to check each value between 0 and 9, in order.  The result is:

```code
value   HowMany
0       2
1       1
2       3
3       3
4       0
5       2
6       5
7       2
8       0
9       2
```

{Run!}(sh .guides/bg.sh gcc code/randArray2.c -o code/randArray2 ./code/randArray2 )

Again, it is hard to tell if the digits are really appearing equally often.  If we increase the size of the array to 100,000 we get the following:

```code
value   HowMany
0       10130
1       10072
2       9990
3       9842
4       10174
5       9930
6       10059
7       9954
8       9891
9       9958
```
In each case, the number of appearances is within about 1% of the expected value (10,000), so we conclude that the random numbers are probably uniform.