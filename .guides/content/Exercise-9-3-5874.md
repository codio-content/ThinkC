Most computer games can capture our interest only when their actions are non-predictable, otherwise they become boring quickly. Section 7.6 tells us how to generate random numbers in C. 

Write a simple game, where the computer chooses an arbitrary number in the range between 1 and 20. You will then be asked to guess the number chosen by the Computer.

To give you a hint the computer should answer your guess in the following way: in case your guess was lower than the number of the computer, the output should be: 
*My number is larger!*
If you guess was higher than the number of the computer, the output should read:
*My number is smaller!*

It is necessary to seed the random number generator when you start your program. You could use the `time()` function for this. It returns the actual time measured in seconds since 1971.

```
    srand(time(NULL));   /*Initialisation of the random number generator*/
```

When you found the right answer, the computer should congratulate you. The program should also display the number of tries that where needed in order to guess the number. 

The program should also keep the a `High-Score`, that gets updated once our number of trials is lower than any previous try. The High-Score (the number of minimal guesses) should be stored in a `struct`, together with the name of the player.

The `High-Score()` function should ask for your name and store it, when your current number of tries is lower than the previous High-Score value. 

The program then gives you the chance to play again or stop the game by pressing 'q' on the keyboard.

{Run!}(sh .guides/bg.sh gcc code/ex9-3.c -o code/ex9-3 ./code/ex9-3 )