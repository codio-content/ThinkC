#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i;
    for (i = 0; i < 4; i++) 
    {
        int x = rand();
        printf("%i\n", x);
    }
  
    return(EXIT_SUCCESS);
}