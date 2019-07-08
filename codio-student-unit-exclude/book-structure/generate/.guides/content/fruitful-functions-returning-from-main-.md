Now that we know functions that return values, we can look more closely at the  return value of the `main()` function. It's supposed to return an integer:

```code
  int main (void)
```

The usual return value from `main()` is 0, which indicates that the program succeeded at whatever it was supposed to to.  If something goes wrong, it is common to return -1, or some other value that indicates what kind of error occurred.


The C standard library `<stdlib.h>` provides two predefined constants `EXIT\_SUCCESS` and `EXIT\_FAILURE`. We can use these to return a descriptive result from our return statement. 


```code
    #include <stdlib.h>
    int main (void)
    {
        return EXIT_SUCCESS;   /*program terminated successfully*/
    }  
```


Of course, you might wonder who this value gets returned to, since we never call `main()` ourselves.  It turns out that when the operating system executes a program, it starts by calling `main()` in pretty much the same way it calls all the other functions. When the program terminates it passes a value back  that tells if the execution was successful or not. The operating system can use this value to create error reports or even pass this value on  to other programs.

There are even some parameters that can be passed to `main()` by the system, but we are not going to deal with them for a little while, so we define  `main()` as having no parameters:  `int main (void)`.