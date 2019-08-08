#include <stdio.h>
#include <stdlib.h>

void Ping () 
{
  printf (".\n");
} 

void Baffle () 
{
  printf ("wug");
  Ping ();
} 

void Zoop () 
{
  Baffle ();
  printf ("You wugga ");
  Baffle ();
}

int main (void) 
{
  printf ("No, I ");
  Zoop ();
  printf ("I ");
  Baffle ();
  return EXIT_SUCCESS;
} 