Strings are called “strings” because they are made up of a sequence, or string, of characters.  The first operation we are going to perform on a string is to extract one of the characters.  C uses an index in square brackets (`[` and `]`) for this operation:

```code
    char fruit[] = "banana";
    char letter = fruit[1];
    printf ("%c\n", letter);
```
The expression `fruit[1]` indicates that I want character number 1 from the string named `fruit`.  The result is stored in a `char` named `letter`.  When I output the value of `letter`, I get a surprise:

```code
   a
```
`a` is not the first letter of `"banana"`.  Unless you are a computer scientist.  For perverse reasons, computer scientists always start counting from zero.  The 0th letter (“zeroeth”) of `"banana"` is `b`.  The 1th letter (“oneth”) is `a` and the 2th (“twoeth”) letter is `n`.

If you want the zereoth letter of a string, you have to put zero in the square brackets:

```code
    char letter = fruit[0];
```