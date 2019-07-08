To demonstrate encapsulation again, I'll take the code from the previous section and wrap it up in a function:

```code
    void PrintMultTable () 
    {
        int i = 1;
        while (i <= 6) 
        {
            PrintMultiples (i);
            i = i + 1;
        }
    }
```
The process I am demonstrating is a common  development plan.  You develop code gradually by adding lines to `main()` or someplace else, and then when you get it working, you extract it and wrap it up in a function.

The reason this is useful is that you sometimes don't know when you start writing exactly how to divide the program into functions.  This approach lets you design as you go along.