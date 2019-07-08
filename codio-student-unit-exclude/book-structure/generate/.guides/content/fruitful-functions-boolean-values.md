The types we have seen so far can hold very large values.  There are a lot of integers in the world, and even more floating-point numbers. By comparison, the set of characters is pretty small.  Well, many computing languages implement an even more fundamental type that is even smaller.  It is called **\_Bool**, and the only values in it are `true` and `false`.

Unfortunately, earlier versions of the C standard did not implement boolean as a separate type, but instead used the integer values 0 and 1 to represent  truth values. By convention 0 represents `false` and 1 represents `true`.  Strictly speaking C interprets any integer value different from 0 as true. This can be a source of error if you are testing a value to be true by comparing it with `1`.


Without thinking about it, we have been using boolean values in the last of chapter.  The condition inside an `if` statement is a boolean expression. Also, the result of a comparison operator is a boolean value. For example:

```code
  if (x == 5) 
  {
    /* do something*/
  }
```
The operator `==` compares two integers and produces a boolean value.


Pre C99 has no keywords for the expression of `true` or `false`. A lot of programs instead are using C preprocessor definitions anywhere a boolean expression is called for. For example, 

```code
  #define FALSE 0
  #define TRUE 1
   ...
  if (TRUE) 
  {
    /* will be always executed  */
  }
```
is a standard idiom for a loop that should run forever (or until it reaches a `return` or `break` statement).