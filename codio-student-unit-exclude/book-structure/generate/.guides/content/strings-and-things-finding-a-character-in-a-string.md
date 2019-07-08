If we are looking for a letter in a `string`, we have to search  through the string and detect the position where this letter occurs in the string. Here is an implementation of this function:

```code
    int LocateCharacter(char *s, char c)
    {
        int i = 0;
        while (i < strlen(s)) 
        {
            if (s[i] == c) return i;
            i = i + 1;
        }
        return -1;
    }
```

We have to pass the `string` as the first argument, the other argument is the character we are looking for. Our function returns the index of the first occurrence of the letter, or `-1` if the letter is not contained in the string.