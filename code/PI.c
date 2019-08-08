#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  const double PI = 3.14159;
  printf ("Pi: %f\n", PI);

  PI = 10.999;  /* wrong, error caught by the compiler  */
  
  return (EXIT_SUCCESS);
}