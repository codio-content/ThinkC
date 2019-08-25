Interestingly, the same mathematical operations that work on integers also work on characters.  For example,

```code
    char letter;
    letter = 'a' + 1;
    printf ("%c\n", letter);
```

outputs the letter `b`.  Although it is syntactically legal to multiply characters, it is almost never useful to do it.

{Run!}(sh .guides/bg.sh gcc code/charMath.c -o code/charMath ./code/charMath )

Earlier I said that you can only assign integer values to integer variables and character values to character variables, but that is not completely true.  In some cases, C converts automatically between types.  For example, the following is legal.

```code
    int number;
    number = 'a';
    printf ("%i\n", number);
```
The result is 97, which is the number that is used internally by C to represent the letter `'a'`.  However, it is generally a good idea to treat characters as characters, and integers as integers, and only convert from one to the other if there is a good reason.

Automatic type conversion is an example of a common problem in designing a programming language, which is that there is a conflict between **formalism**, which is the requirement that formal languages should have simple rules with few exceptions, and **convenience**, which is the requirement that programming languages be easy to use in practice.

More often than not, convenience wins, which is usually good for expert programmers, who are spared from rigorous but unwieldy formalism, but bad for beginning programmers, who are often baffled by the complexity of the rules and the number of exceptions.  In this book I have tried to simplify things by emphasizing the rules and omitting many of the exceptions.