The Captain Crunch decoder ring works by taking each letter in a string and adding 13 to it.  For example, 'a' becomes 'n' and 'b' becomes 'o'.  The letters "wrap around" at the end, so 'z' becomes 'm'.

1.  Write a function that takes a String and that returns a new String containing the encoded version.  You should assume that the String contains upper and lower case letters, and spaces, but no other punctuation.  Lower case letters should be transformed into other lower case letters; upper into upper.  You should not encode the spaces.

1. Generalize the Captain Crunch method so that instead of adding 13 to the letters, it adds any given amount.  Now you should be able to encode things by adding 13 and decode them by adding -13.  Try it.

{Run!}(sh .guides/bg.sh gcc code/ex8-4.c -o code/ex8-4 ./code/ex8-4 )