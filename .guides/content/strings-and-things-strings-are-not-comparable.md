All the comparison operators that work on `int`s and `double`s do work on `strings`.  For example, if you write the following code to determine if two strings are equal:

```code
    if (word == "banana")  /* Wrong! */ 
```

This test will always fail.

You have to use the `strcmp()` function to compare two strings with each other. The function returns `0` if the two strings are  identical, a negative value if the first string is 'alphabetically less' than the second (would be listed first in a dictionary) or a positive value if the second string is 'greater'.

Please notice, this return value is not the standard true/false result, where the return value `0`  is interpreted as 'false'.



The  `strcmp()` function is useful for putting words in alphabetical order.

```code
    if (strcmp(word, "banana") < 0) 
    {
        printf( "Your word, %s, comes before banana.\n", word);
    } 
    else if (strcmp(word, "banana") > 0) 
    {
        printf( "Your word, %s, comes after banana.\n", word);
    } 
    else 
    {
        printf ("Yes, we have no bananas!\n");
    }
```
You should be aware, though, that the `strcmp()` function does not handle upper and lower case letters the same way that people do.  All the upper case letters come before all the lower case letters.  As a result,

```code
Your word, Zebra, comes before banana.
```
A common way to address this problem is to convert strings to a standard format, like all lower-case, before performing the comparison.  The next sections explains how.