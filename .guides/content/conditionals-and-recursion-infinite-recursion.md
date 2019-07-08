In the examples in the previous section, notice that each time the functions get called recursively, the argument gets smaller by one, so eventually it gets to zero.  When the argument is zero, the function returns immediately, *without making any recursive calls*. This case---when the function completes without making a recursive call---is called the **base case**.

If a recursion never reaches a base case, it will go on making recursive calls forever and the program will never terminate.  This is known as **infinite recursion**, and it is generally not considered a good idea.


In most programming environments, a program with an infinite recursion will not really run forever.  Eventually, something will break and the program will report an error.  This is the first example we have seen of a run-time error (an error that does not appear until you run the program).

You should write a small program that recurses forever and run it to see what happens.