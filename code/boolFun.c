#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int IsSingleDigit (int x)
{
    if (x >= 0 && x < 10) 
    {
        return TRUE;
    } 
    else 
    {
        return FALSE;
    }
}

int main(void)
{
    
    printf("%i\n", IsSingleDigit (2));

    return(EXIT_SUCCESS);
}