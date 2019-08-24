#include <stdio.h>
#include <stdlib.h>

void Loop(int n) 
{
    int i = n;
    while (i > 1) 
    {
        printf ("%i\n",i);
        if (i%2 == 0) 
        {
            i = i/2;
        } 
        else 
        {
            i = i+1;
        }
    }
}

int main (void) 
{
    Loop(10);
    return EXIT_SUCCESS;
}