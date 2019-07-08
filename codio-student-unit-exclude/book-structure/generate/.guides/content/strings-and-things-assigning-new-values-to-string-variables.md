So far we have seen how to initialise a string variable  at declaration time. As with arrays in general, it is not  legal to assign values directly to strings, because it is not  possible to assign a value to an entire array.

```code
    fruit = "orange";  /* Wrong: Cannot assign directly! */
```

In order to assign a new value to an existing string variable we have to use the `strncpy()` function. For example,

```code
    char greeting[15];
    strncpy (greeting, "Hello, world!", 13);
```

copies 13 characters from the of the second argument  string to the first argument string.

This works, but not quite as expected. The `strncpy()` function copies exactly 13 characters from the second argument string into the first argument string. And what happens to our  string termination character  `\textbackslash 0`?


It is **not** copied automatically. We need to change our copy statement to copy also the invisible 14th character at the end of the string:

```code
    strncpy (greeting, "Hello, world!", 14);
```

However, if we only copy parts of the second string into the first we need to explicitly set the n+1th character in the `greeting[15]` string to `\textbackslash 0` afterwards.

```code
    strncpy (greeting, "Hello, world!", 5); /*only Hello is copied*/
    greeting[5] = '\0';
```

\vskip 1.5em

**Attention!** In the last two sections we have used the `strncpy()` and the `strncat()` function that require you to explicitly supply the number of characters that will get copied or attached to the first argument string. 

The `string.h` library also defines the `strcpy()` and  the `strcat()` functions that have no explicit bound on the number of characters that are copied. 

The usage of these functions is strongly discouraged! Their use has lead to a vast number of security problems with C programs. Remember, C does not check array boundaries and will continue copying characters into computer memory even past the length of the variable.