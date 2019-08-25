Before you do anything else, find out how to compile and run a C program in your environment.  Some environments provide sample programs similar to the example in Section 1.5.

1.  Type in the “Hello World” program, then compile and run it.

    {Run!}(sh .guides/bg.sh gcc code/hello-copy.c -o code/hello-copy ./code/hello-copy)

1.  Add a second print statement that prints a second message after the “Hello World.”.  Something witty like, “How are you?” Compile and run the program again.

    {Run!}(sh .guides/bg.sh gcc code/hello-copy.c -o code/hello-copy ./code/hello-copy 2)

1.  Add a comment line to the program (anywhere) and recompile it.  Run the program again.  The new comment should not affect the execution of the program. 

    {Run!}(sh .guides/bg.sh gcc code/hello-copy.c -o code/hello-copy ./code/hello-copy 3)

This exercise may seem trivial, but it is the starting place for many of the programs we will work with.  In order to debug with confidence, you have to have confidence in your programming environment.  In some environments, it is easy to lose track of which program is executing, and you might find yourself trying to debug one program while you are accidentally executing another.  Adding (and changing) print statements is a simple way to establish the connection between the program you are looking at and the output when the program runs.
