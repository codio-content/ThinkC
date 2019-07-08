Sometimes you want to check for a number of related conditions and choose one of several actions.  One way to do this is by **chaining** a series of `if`s and `else`s:

```code
    if (x > 0) 
    {
        printf ("x is positive\n");
    } 
    else if (x < 0) 
    {
        printf ("x is negative\n");
    } 
    else 
    {
        printf ("x is zero\n");
    }
```
These chains can be as long as you want, although they can be difficult to read if they get out of hand.  One way to make them easier to read is to use standard indentation, as demonstrated in these examples.  If you keep all the statements and squiggly-braces lined up, you are less likely to make syntax errors and you can find them more quickly if you do.