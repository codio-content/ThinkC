Using a `while` statement, we can rewrite `Countdown()`:

```code
  void Countdown (int n) 
  {
      while (n > 0) 
      {
          printf ("%i\n", n);
          n = n-1;
      }
      printf ("Blastoff!\n");
  }
```
You can almost read a `while` statement as if it were English.  What this means is, “While `n` is greater than zero, continue displaying the value of `n` and then reducing the value of `n` by 1.  When you get to zero, output the word "Blastoff!"

{Run!}(sh .guides/bg.sh gcc code/while.c -o code/while ./code/while )

More formally, the flow of execution for a `while` statement is as follows:

1.  Evaluate the condition in parentheses, yielding `true` or `false`.
1.  If the condition is false, exit the `while` statement and continue execution at the next statement.
1.  If the condition is true, execute each of the statements between the curly-brackets, and then go back to step 1. 

Check out the visualizer in the bottom left panel.

This type of flow is called a **loop** because the third step loops back around to the top.  Notice that if the condition is false the first time through the loop, the statements inside the loop are never executed.  The statements inside the loop are called the **body** of the loop.


The body of the loop should change the value of one or more variables so that, eventually, the condition becomes false and the loop terminates.  Otherwise the loop will repeat forever, which is called an **infinite loop**.  An endless source of amusement for computer scientists is the observation that the directions on shampoo, “Lather, rinse, repeat,” are an infinite loop.

In the case of `Countdown()`, we can prove that the loop will terminate because we know that the value of `n` is finite, and we can see that the value of `n` gets smaller each time through the loop (each **iteration**), so eventually we have to get to zero.  In other cases it is not so easy to tell:

```code
  void Sequence (int n) 
  {
      while (n != 1) 
      {
          printf ("%i\n", n);
          if (n%2 == 0)       /* n is even */
          {          
              n = n / 2;
          } 
          else                /* n is odd */
          {                  
              n = n*3 + 1;
          }
      }
  }
```
The condition for this loop is `n != 1`, so the loop will continue until `n` is 1, which will make the condition false.

At each iteration, the program outputs the value of `n` and then checks whether it is even or odd.  If it is even, the value of `n` is divided by two.  If it is odd, the value is replaced by $3n+1$.  For example, if the starting value (the argument passed to `Sequence`) is 3, the resulting sequence is 3, 10, 5, 16, 8, 4, 2, 1.

{Run!}(sh .guides/bg.sh gcc code/while.c -o code/while ./code/while 2 )

Since `n` sometimes increases and sometimes decreases, there is no obvious proof that `n` will ever reach 1, or that the program will terminate.  For some particular values of `n`, we can prove termination.  For example, if the starting value is a power of two, then the value of `n` will be even every time through the loop, until we get to 1.  The previous example ends with such a sequence, starting with 16.

Particular values aside, the interesting question is whether we can prove that this program terminates for *all* values of n. So far, no one has been able to prove it *or* disprove it!