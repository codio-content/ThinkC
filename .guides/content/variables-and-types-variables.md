One of the most powerful features of a programming language is the ability to manipulate values through the use of **variables**.  So far the values that we have used in our statements where fixed to what  was written in the statement. Now we will use a variable as a named  location that stores a value.  

Just as there are different types of values (integer, character, etc.), there are different types of variables.  When you create a new variable, you have to declare what type it is.  For example, the character type in C is called `char`.  The following statement creates a new variable named `fred` that has type `char`.

```code
    char fred;
```
This kind of statement is called a **declaration**.

The type of a variable determines what kind of values it can store.  A `char` variable can contain characters, and it should come as no surprise that `int` variables can store integers.

Contrary to other programming languages, C does not have a  dedicated variable type for the storage of string values. We will see in a later chapter how string values are stored in C. 


To create an integer variable, the syntax is 

```code
    int bob;
```
where `bob` is the arbitrary name you choose to identify the variable.  In general, you will want to make up variable names that indicate what you plan to do with the variable.  For example, if you saw these variable declarations:

```code
    char first_letter;
    char last_letter;
    int hour, minute;
```
you could probably make a good guess at what values would be stored in them.  This example also demonstrates the syntax for declaring multiple variables with the same type: `hour` and `minute` are both integers (`int` type).

ATTENTION: The older C89 standard allows variable declarations only at the beginning of a block of code. It is therefore necessary to put variable declarations before any other statements, even if the variable itself is only needed much later in your program.