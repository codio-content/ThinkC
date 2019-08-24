#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void PrintMultiples (int n)
{
    int i = 1;
    while (i <= 6) 
    {
        printf("%i   ", i*n);
        i = i + 1;
    }
    printf("\n");
}

void PrintMultTable(int high) 
{ 
    int i = 1; 
    while (i <= high) 
    { 
        PrintMultiples(i); 
        i++; 
    } 
}

int main(void)
{
    PrintMultTable(6);
  
    return(EXIT_SUCCESS);
}