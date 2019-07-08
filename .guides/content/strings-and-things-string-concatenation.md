In Section 8.6 we have seen how we could implement a search function that finds a `character` in a `string`.

One useful operation on strings is string **concatenation**.   To concatenate means to join the two operands end to end.  For example:  `shoe` and `maker` becomes `shoemaker`.

Fortunately, we do not have to program all the necessary functions in C ourselves. The `string.h` library already provides several functions that we can invoke on strings. 

We can use the library function `strncat()` to concatenate strings in C. 

```code
    char fruit[20] = "banana";
    char bakedGood[] = " nut bread";
    strncat(fruit, bakedGood, 10);
    printf ("%s\n", fruit);
```
The output of this program is `banana nut bread`.

When we are using library functions it is important to completely understand all the necessary arguments and to have a complete understanding of the working of the function. 

The `strncat()` does not take the two strings, joins them together and produces a new combined string. It rather copies the content from the second argument into the first. 

We therefore have to make sure that our first string is long enough to  also hold the second string. We do this by defining the maximum capacity for  string `fruit` to be 19 characters + 1 termination character (`char fruit[20]`).  The third argument of `strncat()`  specifies  the number of characters that will be copied from the second into the first string.