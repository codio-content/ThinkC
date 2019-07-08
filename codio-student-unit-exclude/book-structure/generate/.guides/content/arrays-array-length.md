C does not provide us with a convenient way to determine the actual length of an array. Knowing the size of an array would be convenient when we are looping through all elements of the array and need to stop with the last element.

In order to determine the array length we could use the `sizeof()`  operator, that calculates the size of data types in bytes. Most data types in C use more than one byte to store their values, therefore it becomes necessary to divide the byte-count for the array by  the byte-count for a single element to establish the number of elements in the array.
```code
    sizeof(ARRAY)/sizeof(ARRAY_ELEMENT)
```

It is a good idea to use this value as the upper bound of a loop, rather than a constant.  That way, if the size of the array changes, you won't have to go through the program changing all the loops; they will work correctly for any size array.

```code
    int i, length;
    length = sizeof (c) / sizeof (c[0]);

    for (i = 0; i < length; i++) 
    {
        printf("%i\n", c[i]);
    }
```
The last time the body of the loop gets executed, the value of `i` is `length - 1`, which is the index of the last element.  When `i` is equal to `length`, the condition fails and the body is not executed, which is a good thing, since it would access a memory location that is not part of the array.