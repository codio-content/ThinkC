#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char letter = 'a';
    if (isalpha(letter)) 
    {
        printf("The character %c is a letter.", letter);
    }
  
    return(EXIT_SUCCESS);
}