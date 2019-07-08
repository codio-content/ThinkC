You can pass structures as parameters in the usual way.  For example,

```code
    void PrintPoint (Point_t point) 
    {
        printf ("(%0.1f, %0.1f)\n", point.x, point.y);
    }
```
`PrintPoint()` takes a point as an argument and outputs it in the standard format.  If you call `PrintPoint(blank)`, it will output `(3.0, 4.0)`.

As a second example, we can rewrite the `ComputeDistance()` function from Section 5.2 so that it takes two `Point`s as parameters instead of four `double`s.

```code
    double ComputeDistance (Point_t p1, Point_t p2) 
    {
        double dx = p2.x - p1.x;
        double dy = p2.y - p1.y;
        return sqrt (dx*dx + dy*dy);
    }
```