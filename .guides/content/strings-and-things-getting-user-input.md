The programs we have written so far are pretty predictable; they do the same thing every time they run.  Most of the time, though, we want programs that take input from the user and respond accordingly.

There are many ways to get input, including keyboard input, mouse movements and button clicks, as well as more exotic mechanisms like voice control and retinal scanning.  In this text we will consider only keyboard input.


In the header file `stdio.h`, C defines a function named `scanf()` that handles input in much the same way that `printf()` handles output.  We can use the following code to get an integer value from the user:

```code
    int x;
    scanf("%i", &x);
```
The `scanf()` function causes the program to stop executing and wait for the user to type something.  If the user types a valid integer, the program converts it into an integer value and stores it in `x`.

If the user types something other than an integer, C doesn't report an error, or anything sensible like that. Instead, the `scanf()` function returns and leaves the value in `x` unchanged.

Fortunately, there is a way to check and see if an input statement succeeds.  The `scanf()` function returns the number of items that have been successfully read. This number will be `1` when the last input statement succeeded.  If not, we know that some previous operation failed, and also that the next operation will fail.

Getting input from the user might look like this:

```code
    int main (void)
    {
        int success, x;

        /* prompt the user for input */
        printf ("Enter an integer: \n");

        /* get input */
        success = scanf("%i", &x);

        /* check and see if the input statement succeeded */
        if (success == 1) 
        {
            /* print the value we got from the user */
            printf ("Your input: %i\n", x);
            return EXIT_SUCCESS;
        }
        printf("That was not an integer.\n");
        return EXIT_FAILURE;
    }
```
{Run! | terminal}(gcc code/userIn.c -o code/userIn && ./code/userIn )

There is another potential pitfall connected with the `scanf()` function. Your program code might want to insist that the user types a valid integer, because this value is needed later on. In this case you might want to  repeat the input statement in order to get a valid user input:    ```code     if (success != 1)      {           while (success != 1)                                                 {                 printf("That was not a number. Please try again:\n");                success = scanf("%i", &x);           }        } ```

Unfortunately this code leads into an endless loop. You probably ask yourself, why? The input from the keyboard is delivered to your program by the operating system, in  something called an input buffer. A successful read operation automatically empties this buffer. However, if the `scanf()` function fails, like in our example, the buffer does not get emptied and the next `scanf()` operation re-reads the old value - you see the problem?

We need to empty the input buffer, before we can attempt to read the next input from the user. Since there is no standard way to do this, we will introduce our own code that  reads and empties the buffer using the `getchar()` function. It run through a  `while`-loop  until there are no more characters left in the buffer (notice the construction of this loop, where all the operations are executed in the test condition):
```code
      char ch;    /* helper variable stores discarded chars*/
      while (success != 1)                                      
      { 
          printf("That isn't a number. Please try again:\n");
           /* now we empty the input buffer*/
           while ((ch = getchar()) != '\n' && ch != EOF);
           success = scanf("%i", &x);
      }    

```
 

The `scanf()` function can also be used to input a `string`:

```code
    char name[80];

    printf ("What is your name?");
    scanf ("%s", name);
    printf ("%s", name);
```
Again, we have to make sure our string variable is large enough to contain the complete user input. Notice the difference in the argument of the `scanf()` function when we are reading  an `integer` or a `string`. The function requires a pointer to the variable where the input value will be stored. If we are reading an `integer` we need to use the address operator `\&` with the variable name. In the case of a `string` we simply provide the  variable name.

Also notice, that the `scanf()` function only takes the first word of the input, and leaves the rest for the next input statement. So, if you run this program and type your full name, it will only output your first name.