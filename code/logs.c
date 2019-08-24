#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x = 1.0;
    while (x < 10.0) 
    {
        printf ("%.0f\t%f\n", x ,log(x));
        x = x + 1.0;
    }
 
    return(EXIT_SUCCESS);
}