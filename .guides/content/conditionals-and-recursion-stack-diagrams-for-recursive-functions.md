In the previous chapter we used a stack diagram to represent the state of a program during a function call.  The same kind of diagram can make it easier to interpret a recursive function.

Remember that every time a function gets called it creates a new instance that contains the function's local variables and parameters.

This figure shows a stack diagram for Countdown, called with `n = 3`:

![figs/stack2](figs/stack2.jpg)


There is one instance of `main()` and four instances of `Countdown()`, each with a different value for the parameter `n`.  The bottom of the stack, `Countdown()` with `n=0` is the base case.  It does not make a recursive call, so there are no more instances of `Countdown()`.

The instance of `main()` is empty because `main()` does not have any parameters or local variables.  As an exercise, draw a stack diagram for `PrintLines()`, invoked with the parameter `n=4`.