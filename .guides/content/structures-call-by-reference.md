An alternative parameter-passing mechanism that is available in C is called “pass by reference.”   By now we already know that C uses pointers as references. This mechanism makes it possible to pass a structure to a procedure and modify it directly.

For example, you can reflect a point around the 45-degree line by swapping the two coordinates.  The most obvious (but incorrect) way to write a `ReflectPoint()` function is something like this:

```code
    void ReflectPoint (Point_t point)      /* Does not work! */
    {
        double temp = point.x;
        point.x = point.y;
        point.y = temp;
    }
```
This won't work, because the changes we make in `ReflectPoint()` will have no effect on the caller.

Instead, we have to specify that we want to pass the parameter by reference.   Our function now has a struct pointer argument `Point\_t *ptr`.


```code
    void ReflectPoint (Point_t *ptr)
    {
        double temp = ptr->x;
        ptr->x = ptr->y;
        ptr->y = temp;
    }
```
When we are accessing the struct member variables through a pointer  we can no longer use the "field-selection-operator" (`.`). Instead we need to use the "pointing-to" operator (`->`).

We pass a reference of our struct parameter by adding the "address-of"  operator (`\&`) to the structure variable when we call the function:

```code
    PrintPoint (blank);
    ReflectPoint (&blank);
    PrintPoint (blank);
```
The output of this program is as expected:

```code
    (3.0, 4.0)
    (4.0, 3.0)
```
Here's how we would draw a stack diagram for this program:

\centerline{\epsfig{figure=figs/stack_point3.pdf, width=6.5cm}} The parameter `ptr` is a reference to the structure named `blank`.  The usual representation for a reference is a dot with an arrow that points to whatever the reference refers to.

The important thing to see in this diagram is that any changes that `ReflectPoint()` makes through `ptr` will also affect `blank`.

Passing structures by reference is more versatile than passing by value, because the callee can modify the structure.  It is also faster, because the system does not have to copy the whole structure.  On the other hand, it is less safe, since it is harder to keep track of what gets modified where.  Nevertheless, in C programs, almost all structures are passed by reference almost all the time.  In this book I will follow that convention.