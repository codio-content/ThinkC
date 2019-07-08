When we look at the definition of the `LocateCharacter()` function you may notice the following construct `char *s` which looks unfamiliar.

Remember, when we discussed how we had to pass an array to a function, back in Section 7.9, we said that instead of copying the array, we only pass a reference to the function.  Back then, we did not say exactly what this reference was.



C is one of the very few high-level programming languages that let you directly manipulate objects in the computer memory. In order to do this direct manipulation, we need to know the location  of the object in memory: it's address.  Adresses can be stored in variables of a special type. These variables that point to other objects in memory  (such as variables, arrays and strings)  are therefore called **pointer** variables. 

A pointer references the memory location of an object and can be defined like this:

```code
    int *i_p;
```

This declaration looks similar to our earlier declarations, with one difference: the asterisk in front of the name.  We have given this pointer the type `int`. The type specification has nothing to do with the pointer itself, but rather defines which object this pointer is supposed to reference (in this case an `integer`). This allows the compiler to do some type checking on, what would otherwise be, an anonymous reference.    A pointer all by itself is rather meaningless, we also need an object that this pointer is referencing:

```code
    int number = 5; 
    int *i_p;
```
  This code-fragment defines an `int` variable and a pointer. We can use   the "address-of" operator `\&` to assign  the memory   location or **address** of our variable to the pointer.    ```code     i_p = &number; ```

Pointer `i\_p` now references integer variable `number`. We can verify this using the "content-of" operator `*`.

 ```code     printf("%i\n", *i_p); ```

This prints `5`, which happens to be the content of the  memory location at our pointer reference. 

With pointers we can directly manipulate memory locations:

 ```code     *i_p = *i_p + 2;     printf("%i\n", number); ```

Our variable `number` now has the value `7` and we begin to  understand how our `LocateCharacter()` function can directly access  the values of string variables through the use of a `char` pointer.

Pointers are widely used in many C programs and we have only touched the surface of the topic. They can be immensely useful  and efficient, however they can also be a potential source of problems when not used appropriately. For this reason not many programming languages support direct memory manipulation.