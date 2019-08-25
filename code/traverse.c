#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int index = 0;
    char fruit[] = "banana"; 
    while (index < strlen(fruit)) 
    {
        char letter = fruit[index];
        printf("%c\n" , letter);
        index = index + 1;
    }
  
    return(EXIT_SUCCESS);
}