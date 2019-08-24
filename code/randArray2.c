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

int HowMany (int array[], int length, int value) 
{
    int i; 
    int count = 0;

    for (i=0; i < length; i++) 
        {
            if (array[i] == value) count++;
        }
    return count;
}

int main(void)
{
    int i;
    int r_array[20];
    int upperBound = 10;
    int length = sizeof(r_array) / sizeof(r_array[0]);
  
    RandomizeArray(r_array, length, upperBound);

    printf ("value\tHowMany\n");
    for (i = 0; i < upperBound; i++) 
    {
        printf("%i\t\t%i\n", i, HowMany(r_array, length, i));
    }
  
    return(EXIT_SUCCESS);
}