#include <stdio.h>
#include <stdlib.h>

void PrintTime (int hour, int minute) 
{
  printf ("%i", hour);
  printf (":");
  printf ("%i", minute);
}

int main (void)
{
    int hour = 11;
    int minute = 59;
    PrintTime ( hour, minute);   /* WRONG! */
   return EXIT_SUCCESS;
}