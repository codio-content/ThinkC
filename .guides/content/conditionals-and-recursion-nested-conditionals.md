In addition to chaining, you can also nest one conditional within another.  We could have written the previous example as:

```code
    if (x == 0) 
    {
        printf ("x is zero\n");
    } 
    else 
    {
        if (x > 0) 
        {
            printf ("x is positive\n");
        }
        else 
        {
            printf ("x is negative\n");
        }
    }
```
There is now an outer conditional that contains two branches.  The first branch contains a simple output statement, but the second branch contains another `if` statement, which has two branches of its own.  Fortunately, those two branches are both output statements, although they could have been conditional statements as well.

{Run!}(sh .guides/bg.sh gcc code/chainConditions.c -o code/chainConditions ./code/chainConditions)

Notice again that indentation helps make the structure apparent, but nevertheless, nested conditionals get difficult to read very quickly.  In general, it is a good idea to avoid them when you can.


On the other hand, this kind of **nested structure** is common, and we will see it again, so you better get used to it.