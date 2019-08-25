#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c[4];
    c[0] = 7;
    c[1] = c[0] * 2;
    c[2]++;
    c[3] -= 60;
  
    int i = 0;
    while (i < 4) 
    {
        printf ("%i\n", c[i]);
        i++;
    }

    return(EXIT_SUCCESS);
}