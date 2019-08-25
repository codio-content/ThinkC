#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char greeting[15];
    strncpy (greeting, "Hello, world!", 14);
    printf("%s", greeting);
  
    return(EXIT_SUCCESS);
}