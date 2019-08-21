#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output */

int main(void)
{
    //Change the value of x and re-run to see what happens
    int quotient = 7 / 3;
    int remainder = 7 % 3;

    printf ("Quotient is %i \n", quotient);
    printf ("Remainder is %i", remainder);
  
    return(EXIT_SUCCESS);
}
