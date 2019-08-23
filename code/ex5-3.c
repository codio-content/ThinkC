#include <stdio.h>
#include <stdlib.h>

int FunctionOne (int m, int n) 
{ 
    if (m == n) 
    {
        return n;
    } 
    else 
    {
        return m + FunctionOne (m+1, n);
    }
}

int FunctionTwo (int m, int n) 
{
    if (m == n) 
    {
        return n;
    } 
    else 
    {
        return n * FunctionTwo (m, n-1);
    }
}

int main(void)
{


    return(EXIT_SUCCESS);
}