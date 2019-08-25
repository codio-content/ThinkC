You can use the `getchar()` function in C to get character input from the user through the keyboard. This function stops the execution of the program and waits for the input from the user. 

The `getchar()` function has the type `int` and does not require an argument. It returns the ASCII-Code of the key that has been pressed on the keyboard.

1. Write a program, that asks the user to input a digit between  0 and 9. 

1. Test the input from the user and display an error message if the returned value is not a digit. The program should then be terminated.
   If the test is successful, the program should print the input value on the computer screen.
   
{Run!}(sh .guides/bg.sh gcc code/ex4-3.c -o code/ex4-3 ./code/ex4-3)