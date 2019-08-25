Now let's say that we want to create a structure to represent a rectangle.  The question is, what information do I have to provide in order to specify a rectangle?  To keep things simple let's assume that the rectangle will be oriented vertically or horizontally, never at an angle.

There are a few possibilities: I could specify the center of the rectangle (two coordinates) and its size (width and height), or I could specify one of the corners and the size, or I could specify two opposing corners.

The most common choice in existing programs is to specify the upper left corner of the rectangle and the size.  To do that in C, we will define a structure that contains a `Point\_t` and two doubles.

```code
    typedef struct 
    {
        Point_t corner;
        double width, height;
    } Rectangle_t;  
```
Notice that one structure can contain another.  In fact, this sort of thing is quite common.  Of course, this means that in order to create a `Rectangle_t`, we have to create a `Point_t` first:

```code
    Point_t corner = { 0.0, 0.0 };
    Rectangle_t box = { corner, 100.0, 200.0 };
```
This code creates a new `Rectangle\_t` structure and initializes the member variables.  The figure shows the effect of this assignment.

\centerline{\epsfig{figure=figs/rectangle.pdf, width=6cm}} We can access the `width` and `height` in the usual way:

```code
    box.width += 50.0;
    printf("%f\n", box.width);
```
In order to access the member variables of `corner`, we can use a temporary variable:

```code
    Point_t temp = box.corner;
    double x = temp.x;
```
Alternatively, we can compose the two statements:


```code
    double x = box.corner.x;
```
It makes the most sense to read this statement from right to left: “Extract `x` from the `corner` of the `box`, and assign it to the local variable `x`.”

While we are on the subject of composition, I should point out that you can, in fact, create the `Point` and the `Rectangle` at the same time:

```code
    Rectangle_t box = { { 0.0, 0.0 }, 100.0, 200.0 };
```
{Run!}(sh .guides/bg.sh gcc code/point.c -o code/point ./code/point 7 )

The innermost squiggly braces are the coordinates of the corner point; together they make up the first of the three values that go into the new `Rectangle`.  This statement is an example of **nested structure**.