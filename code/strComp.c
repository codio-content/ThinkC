#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char word[] = "Zebra";
  
    if (strcmp(word, "banana") < 0) 
    {
        printf( "Your word, %s, comes before banana.\n", word);
    } 
    else if (strcmp(word, "banana") > 0) 
    {
        printf( "Your word, %s, comes after banana.\n", word);
    } 
    else 
    {
        printf ("Yes, we have no bananas!\n");
    }
  
    return(EXIT_SUCCESS);
}