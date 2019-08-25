#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Area(double radius) 
{
    double pi = acos (-1.0);
    double area = pi * radius * radius;
    return area;
}

double AbsoluteValue (double x) 
{
    if (x < 0) 
    {
        return -x;
    } 
    else 
    {
        return x;
    }
}

int main(void)
{
      //try out different values
      double radius = 5.0;
      double val = -5.0;
  
      printf("The area of a circle with radio %f is %f \n", radius, Area(radius));
      printf("The absolute value of %f is %f", val, AbsoluteValue(val));
  
      return(EXIT_SUCCESS);
}