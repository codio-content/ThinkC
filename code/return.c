#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void PrintLogarithm (double x) 
{
    if (x <= 0.0) 
    {
        printf ("Positive numbers only, please.\n");
        return;
    }
  
    double result = log(x);
    printf ("The log of x is %f\n", result);
}

int main(void)
{  
    PrintLogarithm(17.0);
  
    return(EXIT_SUCCESS);
}
