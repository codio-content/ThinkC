A second form of conditional execution is alternative execution, in which there are two possibilities, and the condition determines which one gets executed.  The syntax looks like:

```code
  if (x%2 == 0)
  {
      printf ("x is even\n");
  } 
  else 
  {
      printf ("x is odd\n");
  }
```

|||info
Modify your conditionals code on the left based on the code snippet above.

{Run!}(sh .guides/bg.sh gcc code/conditionals.c -o code/conditionals ./code/conditionals)
|||

If the remainder when `x` is divided by 2 is zero, then we know that `x` is even, and this code displays a message to that effect.  If the condition is false, the second set of statements is executed.  Since the condition must be true or false, exactly one of the alternatives will be executed.

As an aside, if you think you might want to check the parity (evenness or oddness) of numbers often, you might want to “wrap” this code up in a function, as follows:

```code
  void PrintParity (int x) 
  {
      if (x%2 == 0) 
      {
          printf ("x is even\n");
      } 
      else 
      {
          printf ("x is odd\n");
      }
  }
```
Now you have a function named `PrintParity()` that will display an appropriate message for any integer you care to provide. In `main()` you would call this function as follows:

```code
   PrintParity (17);
```

{Run!}(sh .guides/bg.sh gcc code/conditionals.c -o code/conditionals ./code/conditionals)

Always remember that when you *call* a function, you do not have to declare the types of the arguments you provide. C can figure out what type they are.  You should resist the temptation to write things like:

```code
   int number = 17;
   PrintParity (int number);         /* WRONG!!! */
```