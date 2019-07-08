It is sometimes appropriate for functions to return `boolean` values just  like any other return type. This is  is especially convenient for hiding complicated tests inside functions.  For example:

```code
    int IsSingleDigit (int x)
    {
        if (x >= 0 && x < 10) 
        {
            return TRUE;
        } 
        else 
        {
            return FALSE;
        }
    }
```
The name of this function is `IsSingleDigit()`.  It is common to give such test functions names that sound like yes/no questions. The return type is `int`, which means that again we need to follow the agreement that  0 represents `false` and 1  represents `true`. Every return statement has to follow this convention, again, we are using preprocessor definitions.

The code itself is straightforward, although it is a bit longer than it needs to be.  Remember that the expression `x >= 0 \&\& x < 10` is evaluated to a `boolean` value, so there is nothing wrong with returning it directly, and avoiding the `if` statement altogether:

```code
    int IsSingleDigit (int x)
    {
        return (x >= 0 && x < 10);
    }
```
In `main()` you can call this function in the usual ways:

```code
    printf("%i\n", IsSingleDigit (2));
    short bigFlag = !IsSingleDigit (17);
```
The first line outputs the value `true` because 2 is a single-digit number.  Unfortunately, when C outputs `boolean` values, it does not display the words `TRUE` and `FALSE`, but rather the integers `1` and `0`.

The second line assigns the value `true` to `bigFlag` only if 17 is *not* a positive single-digit number.

The most common use of boolean functions is inside conditional statements

```code
    if (IsSingleDigit (x)) 
    {
        printf("x is little\n");
    } 
    else 
    {
        printf("x is big\n");
    }
```