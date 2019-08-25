A friend of yours shows you the following method and explains that if `number` is any two-digit number, the program will output the number backwards.  He claims that if `number` is 17, the method will output `71`.

{Submit Answer!|assessment}(free-text-1324978957)


```
   #include <stdio.h>
   #include<stdlib.h>
   
   int main (void)
   {
     int number = 71;
     int lastDigit = number%10;
     int firstDigit = number/10;
     printf("%i",lastDigit + firstDigit);
     return EXIT_SUCCESS;
  }
```