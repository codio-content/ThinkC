#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "banana";
    char bakedGood[] = " nut bread";
    strncat(fruit, bakedGood, 10);
    printf ("%s\n", fruit);
  
    return(EXIT_SUCCESS);
}