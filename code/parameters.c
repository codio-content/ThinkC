#include <stdio.h>
#include <stdlib.h>

void PrintTwice (char phil) 
{
    printf("%c%c\n", phil, phil);
}

int main (void)
{
   PrintTwice ('a');
   return EXIT_SUCCESS;
}