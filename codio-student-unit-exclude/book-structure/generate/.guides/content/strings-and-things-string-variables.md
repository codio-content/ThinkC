You can create a string variable as an array of characters in the following way:

```code
    char first[] = "Hello, ";
    char second[] = "world.";
```
The first line creates an `string` and assigns it the string value `"Hello."` In the second line we declare a second string variable. Remember, the combined declaration and assignment is called initialization.

Initialisation time is the only time you can assign a value to a string directly (just as with arrays in general). The initialisation parameters are passed  in the form of a string constant enclosed in quotation marks ({\tt"}\ldots {\tt"}).

Notice the difference in syntax for the initialisation of arrays and strings.  If you like you can also initialize the string in the normal array syntax,  although this looks a little odd and is not very convenient to type.  

```code
    char first[] = {'H','e','l','l','o',',',' ','\0'};
```

There is no need to supply an array size when you are initialising the  string variable at declaration time. The compiler compute the necessary array size to store the supplied string.

Remember what we said about the nature of a string variable. It is an array of characters **plus** a marker that shows where our string ends: the  termination character  `\textbackslash 0`.

Normally you do not have to supply this termination character. The compiler understands our code and insertes it automatically. However, in the example above, we treated our string exactly like an array and in this case we have to insert the termination character ourselves.

When we are using a string variable to store different sting values  during the lifetime of our program we have to declare a size big enough for the largest sequence of characters that we are going to store. We also have to make our string variable exactly one character longer than the text we are going to store, because of the necessary termination character. 

We can output strings in the usual way using the `printf()` function:

```code
    printf("%s", first);
```