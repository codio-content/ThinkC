Most of the operators we have been using on other types, like mathematical operators ( `+`, `%`, etc.) and comparison operators (`==`, `>`, etc.), do not work on structures.

On the other hand, the assignment operator *does* work for structures.  It can be used in two ways: to initialize the member variables of a structure or to copy the member variables from one structure to another.  An initialization looks like this:

```code
    Point_t blank = { 3.0, 4.0 };
```
The values in squiggly braces get assigned to the member variables of the structure one by one, in order.  So in this case, `x` gets the first value and `y` gets the second.

Unfortunately, this syntax can be used only in an initialization, not in an assignment statement.  So the following is illegal:

```code
    Point_t blank;
    blank = { 3.0, 4.0 };       /* WRONG !! */
```
You might wonder why this perfectly reasonable statement should be illegal; I'm not sure, but I think the problem is that the compiler doesn't know what type the right hand side should be.  You must specify the type of the assignment by adding a typecast:

```code
    Point_t blank;
    blank = (Point_t){ 3.0, 4.0 };
```
That works.

It is legal to assign one structure to another.  For example:

```code
    Point_t p1 = { 3.0, 4.0 };
    Point_t p2 = p1;
    printf ("%f, %f\n", p2.x, p2.y);
```
The output of this program is `3, 4`.