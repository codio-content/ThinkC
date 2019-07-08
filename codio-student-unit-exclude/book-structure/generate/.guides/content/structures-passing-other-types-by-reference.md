It's not just structures that can be passed by reference. All the other types we've seen can, too.  For example, to swap two integers, we could write something like:

```code
    void Swap (int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
```
We would call this function in the usual way:

```code
    int i = 7;
    int j = 9;
    printf (" i=%i, j=%i\n", i, j);
    Swap (&i, &j);
    printf (" i=%i, j=%i\n", i, j);
```
The output of this program shows that the variable values have been swapped.  Draw a stack diagram for this program to convince yourself this is true. If the parameters `x` and `y` were declared as regular integer variables (without the `\*`s), `Swap()` would not work.  It would modify `x` and `y` and have no effect on `i` and `j`.

When people start passing things like integers by reference, they often try to use an expression as a reference argument.  For example:

```code
    int i = 7;
    int j = 9;
    Swap (&i, &j+1);         /* WRONG!! */
```
Presumably the programmer wanted to increase the value of `j` by `1` before it is passed to the function. This does not work as expected, because the expression `j+1` now is interpreted a pointer value and in now pointing to a memory location beyond the variable `j`.  It is a little tricky to figure out exactly what kinds of expressions make sense to be passed by reference.  For now a good rule of thumb is that reference arguments have to be variables.