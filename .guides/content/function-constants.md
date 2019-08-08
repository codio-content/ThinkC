In the previous section we have assigned the value 3.14159 to a floating point variable. An important thing to remember about variables is, that they can hold -- as their name implies --  different values at different points in your program.  For example, we could assign the value 3.14159 to the variable `pi` now and assign  some other value to it later on:

```code
    double pi = 3.14159;
    ...
    pi = 10.999;  /* probably a logical error in your program */
```

The second value is probably not what you intended when you first created the named storage location `pi` . The value for $\pi$ is  constant and does not change over time. Using the storage location `pi` to hold arbitrary other values can  cause some very hard to find bugs in your program.

C allows you to specify the static nature of storage locations through the use of the keyword `const`. It must be used in conjunction with the  required type of the constant. A value will be assigned at initialisation but can never be changed again during the runtime of the program.  

```code
    const double PI = 3.14159;
    printf ("Pi: %f\n", PI);
     ...
    PI = 10.999;  /* wrong, error caught by the compiler  */
```

{Run!}(sh .guides/bg.sh gcc code/PI.c -o code/PI ./code/PI)

It is no longer possible to change the value for  `PI` once it has been initialised, but  other than this we can use it just like a variable.

In order to visually separate constants from variables we will use all uppercase letters in their names.