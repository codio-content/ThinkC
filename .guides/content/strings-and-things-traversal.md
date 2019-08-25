A common thing to do with a string is start at the beginning, select each character in turn, do something to it, and continue until the end.  This pattern of processing is called a **traversal**.  A natural way to encode a traversal is with a `while` statement:

```code
    int index = 0;
    while (index < strlen(fruit)) 
    {
        char letter = fruit[index];
        printf("%c\n" , letter);
        index = index + 1;
    }
```
{Run!}(sh .guides/bg.sh gcc code/traverse.c -o code/traverse ./code/traverse )

This loop traverses the string and outputs each letter on a line by itself.  Notice that the condition is `index < strlen(fruit)`, which means that when `index` is equal to the length of the string, the condition is false and the body of the loop is not executed. The last character we access is the one with the index `strlen(fruit)-1`.


The name of the loop variable is `index`.  An **index** is a variable or value used to specify one member of an ordered set, in this case the set of characters in the string.  The index indicates (hence the name) which one you want.  The set has to be ordered so that each letter has an index and each index refers to a single character.

As an exercise, write a function that takes a `string` as an argument and that outputs the letters backwards, all on one line.