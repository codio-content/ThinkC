#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    while (i <= 6) 
    {
        printf("%i   ", i*2);
        i = i + 1;
    }
    printf("\n");
  
    return(EXIT_SUCCESS);
}