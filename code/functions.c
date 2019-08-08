#include <stdio.h>
#include <stdlib.h>

void PrintNewLine (void) 
{
    printf ("\n");
}

int main (void)
{
   printf ("First Line.\n");
   PrintNewLine ();
   printf ("Second Line.\n");
   return EXIT_SUCCESS;
}