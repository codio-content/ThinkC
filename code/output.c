#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int hour, minute;
  char colon;
  
  hour = 11;
  minute = 59;
  colon = ':';
  
  printf ("The current time is ");
  printf ("%i", hour);
  printf ("%c", colon);
  printf ("%i", minute);
  printf ("\n");
  
  return (EXIT_SUCCESS);
}