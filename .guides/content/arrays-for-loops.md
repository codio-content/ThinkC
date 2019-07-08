The loops we have written so far have a number of elements in common.  All of them start by initializing a variable; they have a test, or condition, that depends on that variable; and inside the loop they do something to that variable, like increment it.


This type of loop is so common that there is an alternate loop statement, called `for`, that expresses it more concisely.  The general syntax looks like this:

```code
    for (INITIALIZER; CONDITION; INCREMENTOR) 
    {
        BODY
    }
```
This statement is exactly equivalent to

```code
    INITIALIZER;
    while (CONDITION) 
    {
        BODY
        INCREMENTOR
    }
```
except that it is more concise and, since it puts all the loop-related statements in one place, it is easier to read. For example:

```code
    int i;
    for (i = 0; i < 4; i++) 
    {
        printf("%i\n", c[i]);
    }
```
is equivalent to 

```code
    int i = 0;
    while (i < 4) 
    {
        printf("%i\n", c[i]);
        i++;
    }
```