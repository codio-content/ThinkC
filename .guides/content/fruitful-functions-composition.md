As you should expect by now, once you define a new function, you can use it as part of an expression, and you can build new functions using existing functions.  For example, what if someone gave you two points, the center of the circle and a point on the perimeter, and asked for the area of the circle?

Let's say the center point is stored in the variables `xc` and `yc`, and the perimeter point is in `xp` and `yp`.  The first step is to find the radius of the circle, which is the distance between the two points.  Fortunately, we have a function, `Distance()`, that does that.

```code
  double radius = Distance (xc, yc, xp, yp);
```
The second step is to find the area of a circle with that radius, and return it.

```code
  double result = Area (radius);
  return result;
```
Wrapping that all up in a function, we get:

```code
  double AreaFromPoints (double xc, double yc, double xp, double yp) 
  {
      double radius = Distance (xc, yc, xp, yp);
      double result = Area (radius);
      return result;
  } 
```


The temporary variables `radius` and `area` are useful for development and debugging, but once the program is working we can make it more concise by composing the function calls:

```code
  double AreaFromPoints (double xc, double yc, double xp, double yp) 
  {
      return Area (Distance (xc, yc, xp, yp));
  } 
```