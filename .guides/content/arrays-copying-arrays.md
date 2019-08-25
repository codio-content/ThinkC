Arrays can be a very convenient solution for a number of problems, like storing and processing large sets of data.

However, there is very little that C does automatically for you. For example you can not set all the elements of an array at the same time and you can not assign one array to the other, even if they are identical in type and number of elements.


```code
    double a[3] = {1.0, 1.0, 1.0};
    double b[3];

    a = 0.0;     /* Wrong! */
    b = a;       /* Wrong! */
```

In order to set all of the elements of an array to some value, you must do so element by element. To copy the contents of one array to another, you must again do so, by copying each element from one array to the other.

```code
    int i = 0;
    while (i < 3) 
    {
        b[i] = a[i];
        i++;
    }
```

{Run!}(sh .guides/bg.sh gcc code/copyingArrays.c -o code/copyingArrays ./code/copyingArrays )