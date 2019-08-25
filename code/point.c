#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    double x;
    double y;
} Point_t;  

int main(void)
{
    Point_t blank;
    blank.x = 3.0;
    blank.y = 4.0;
  
    return(EXIT_SUCCESS);
}