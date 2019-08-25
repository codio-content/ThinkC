#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{  

    printf("%i", raiseToPow(2,3));
  
    return(EXIT_SUCCESS);
}

int raiseToPow (int base, int power) 
{
  int result = pow(base,power);
  return result;
}