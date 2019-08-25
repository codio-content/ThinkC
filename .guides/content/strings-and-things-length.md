To find the length of a string (the number of characters this string contains), we can use the `strlen()` function.  The function is called using the string variable as an argument:

```code
    #include <string.h>
    int main(void)
    { 
       int length;
       char fruit[] = "banana"; 

       length = strlen(fruit);
       return EXIT_SUCCESS;
    }   
```
{Run!}(sh .guides/bg.sh gcc code/strLength.c -o code/strLength ./code/strLength )

The return value of `strlen()` in this case is 6. We assign this value to the integer  `length`  for further use.  

In order to compile this code, you need to include the header file for the `string.h` library. This library provides a number of useful functions for operations on strings.  You should familiarize yourself with these functions because they can  help you to solve your programming problems faster.



To find the last letter of a string, you might be tempted to try something like

```code
    int length = strlen(fruit);
    char last = fruit[length];       /* WRONG!! */
```
That won't work.  The reason is that  `fruit` is still an array and there is no letter at the array index  `fruit[6]` in `"banana"`.  Since we started counting at 0, the 6 letters are numbered from 0 to 5.  To get the last character, you have to subtract 1 from `length`.

```code
    int length = strlen(fruit);
    char last = fruit[length-1];
```