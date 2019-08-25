#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LocateCharacter(char *s, char c)
{
    int i = 0;
    while (i < strlen(s)) 
    {
        if (s[i] == c) return i;
        i = i + 1;
    }
    return -1;
}

int main(void)
{
    char fruit[] = "banana";
  
    printf("%i", LocateCharacter(fruit, 'a'));
    return(EXIT_SUCCESS);
}