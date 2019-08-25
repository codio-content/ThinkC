#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

int main(void)
{
    //decleration
    short fred;  
    //assignment
    fred = TRUE;
    //initialization 
    short testResult = FALSE;  
  
    int n = 6;
    int x = -5;
  
    short evenFlag = (n%2 == 0);     /* true if n is even */
    short positiveFlag = (x > 0);    /* true if x is positive */
  
    if (evenFlag) 
    {
        printf("n was even when I checked it");
    }

    return(EXIT_SUCCESS);
}