As a simple example of a compound structure, consider the concept of a mathematical point.  At one level, a point is two numbers (coordinates) that we treat collectively as a single object.  In mathematical notation, points are often written in parentheses, with a comma separating the coordinates.  For example, $(0, 0)$ indicates the origin, and $(x, y)$ indicates the point $x$ units to the right and $y$ units up from the origin.

A natural way to represent a point in C is with two `double`s. The question, then, is how to group these two values into a compound object, or structure.  The answer is a `struct` definition:

```code
    typedef struct 
    {
        double x;
        double y;
    } Point_t;  
```
`struct` definitions appear outside of any function definition, usually at the beginning of the program (after the `include` statements).

This definition indicates that there are two elements in this structure, named `x` and `y`.  These elements are called the **members** or **fields** of a structure.

It is a common error to leave off the semi-colon at the end of a structure definition.  It might seem odd to put a semi-colon after curly-brackets, but you'll get used to it.

Once you have defined the new structure, you can create variables with that type:

```code
    Point_t blank;
    blank.x = 3.0;
    blank.y = 4.0;   
```
The first line is a conventional variable declaration: `blank` has type `Point\_t`.  The next two lines initialize the fields of the structure.  The “dot notation” used here is called the **field selection operator** and allows to access the structure fields.


The result of these assignments is shown in the following state diagram:

\centerline{\epsfig{figure=figs/point.pdf, width=3.0cm}}

As usual, the name of the variable `blank` appears outside the box and its value appears inside the box.  In this case, that value is a compound object with two named member variables.