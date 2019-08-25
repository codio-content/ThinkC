#include <stdio.h>
#include <stdlib.h>

void RandomizeArray (int array[], int length, int upperBound) 
{
    int i;
    for (i = 0; i < length; i++) 
    {
        array[i] = rand() % upperBound;
    }
}

void PrintArray (int array[], int length) 
{
    int i;
    for (i = 0; i < length; i++) 
    {
        printf ("%i ",  array[i]);
    }
}

int main(void)
{
    int r_array[20];
    int upperBound = 10;
    int length = sizeof(r_array) / sizeof(r_array[0]);
  
    RandomizeArray (r_array, length, upperBound);
    PrintArray (r_array, length);
  
    return(EXIT_SUCCESS);
}