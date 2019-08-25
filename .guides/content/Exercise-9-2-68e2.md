Write a program, that defines a struct `Person_t`. This struct should contain two members. The first member should be a string of sufficient length, to contain the name of a person. The second member should be an integer value containing the persons age. 

1.  Define two struct variables `person1` and `person2`.
    Initialize the two struct variables with suitable values. The first person should be called Betsy. Betsy should be 42 years old.
    The second person should be named after yourself and should also be as old as yourself.

1. Write a function `PrintPerson()`. The function should take a struct variable of type `Person_t` as an argument and print the name of the person and the corresponding age.

1. Write a function `HappyBirthday()`. The function should increase the age of the corresponding person by one year and print out a birthday greeting.\\
   **Hint:** You need to passes a reference to the structure to the function *call-by-reference*. If your function uses *call-by-value*, the age only changes in the local copy of the struct and the changes you have made are lost, once the function terminates. Try it out, if you do not believe me!
   
{Run!}(sh .guides/bg.sh gcc code/ex9-2.c -o code/ex9-2 ./code/ex9-2 )