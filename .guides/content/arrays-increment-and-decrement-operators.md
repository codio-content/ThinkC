Incrementing and decrementing are such common operations that C provides special operators for them.  The `++` operator adds one to the current value of an `int`, `char` or `double`, and `-``-` subtracts one.  

Technically, it is legal to increment a variable and use it in an expression at the same time.  For example, you might see something like:

```code
    printf ("%i\n ", i++);
```
Looking at this, it is not clear whether the increment will take effect before or after the value is displayed.  Because expressions like this tend to be confusing, I would discourage you from using them.  In fact, to discourage you even more, I'm not going to tell you what the result is.  If you really want to know, you can try it.

Using the increment operators, we can rewrite the `PrintMultTable()` from Section 6.10:

```code
    void PrintMultTable(int high) 
    { 
        int i = 1; 
        while (i <= high) 
        { 
            PrintMultiples(i); 
            i++; 
        } 
    }
```

{Run!}(sh .guides/bg.sh gcc code/increment.c -o code/increment ./code/increment )

It is a common error to write something like:

```code
    index = index++;             /* WRONG!! */
```
Unfortunately, this is syntactically legal, so the compiler will not warn you.  The effect of this statement is to leave the value of `index` unchanged.  This is often a difficult bug to track down.

Remember, you can write `index = index + 1;`, or you can write `index++;`, but you shouldn't mix them.