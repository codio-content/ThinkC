#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a[3] = {1.0, 1.0, 1.0};
    double b[3];

    int i = 0;
    while (i < 3) 
    {
        b[i] = a[i];
        i++;
    }
  
    return(EXIT_SUCCESS);
}