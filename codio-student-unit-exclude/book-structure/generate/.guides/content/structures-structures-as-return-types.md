You can write functions that return structures.  For example, `FindCenter()` has a `Rectangle\_t` parameter and returns a `Point\_t` that contains the coordinates of the center of the rectangle:

```code
    Point_t FindCenter (Rectangle_t box)
    {
        double x = box.corner.x + box.width/2;
        double y = box.corner.y + box.height/2;
        Point_t result = {x, y};
        return result;
    }
```
To call this function, we have to pass a `Rectangle\_t` as an argument (notice that it is being passed by value), and assign the return value to a `Point\_t` variable:

```code
    Rectangle_t box = { {0.0, 0.0}, 100, 200 };
    Point_t center = FindCenter (box);
    PrintPoint (center);
```
The output of this program is `(50, 100)`.

We could have passed the structure as a reference to the function. In this case our function would look like this:

```code
    Point_t FindCenter (Rectangle_t *box)
    {
        double x = box->corner.x + box->width/2;
        double y = box->corner.y + box->height/2;
        Point_t result = {x, y};
        return result;
    }
```
Notice, how we had to change the access to the members of the  structure, since `box` is now a pointer.  We would also have to change the function call for `FindCenter()`:

```code
    Point_t center = FindCenter (&box);
```