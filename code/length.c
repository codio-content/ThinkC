#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  
    int c[4];
  
    c[0] = 7;
    c[1] = c[0] * 2;
    c[2]++;
    c[3] -= 60;
  
    int i, length;
    length = sizeof (c) / sizeof (c[0]);

    for (i = 0; i < length; i++) 
    {
        printf("%i\n", c[i]);
    }
  
    return(EXIT_SUCCESS);
}