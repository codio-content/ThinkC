#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
   int length;
   char fruit[] = "banana"; 

   length = strlen(fruit);
   printf("%i", length);
   return EXIT_SUCCESS;
}