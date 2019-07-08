The `[]` operator allows us to read and write the individual elements of an array.   The indices start at zero, so `c[0]` refers to the first element of the array, and `c[1]` refers to the second element.  You can use the `[]` operator anywhere in an expression:


```code
    c[0] = 7;
    c[1] = c[0] * 2;
    c[2]++;
    c[3] -= 60;
```
All of these are legal assignment statements.  Here is the effect of this code fragment:



\unitlength0.1cm

\begin{picture}(40,10)(-30,-5)
\put(5,1.5){{\Large `c`}}

\put(10,0){\framebox(7,5){**\textsf{7**}}}
\put(17,0){\framebox(7,5){**\textsf{14**}}}
\put(24,0){\framebox(7,5){**\textsf{1**}}}
\put(31,0){\framebox(7,5){**\textsf{-60**}}}

\put(10.5,-4){{\scriptsize `c[0]`}}
\put(17.5,-4){{\scriptsize `c[1]`}}
\put(24.5,-4){{\scriptsize `c[2]`}}
\put(31.5,-4){{\scriptsize `c[3]`}}

\end{picture}

By now you should have noticed that the four elements of this array are numbered from 0 to 3, which means that there is no element with the index 4.  

Nevertheless, it is a common error to go beyond the bounds of an array. In safer languages such as Java, this will cause an  error and most likely the program quits. C does not check array boundaries, so your program can go on accessing memory locations beyond the array itself, as if  they where part of the array. This is most likely wrong and can cause very severe bugs in your program. 


> {\bf It is necessary that you, as a programmer,
> make sure that your code correctly observes array boundaries!}






You can use any expression as an index, as long as it has type `int`.  One of the most common ways to index an array is with a loop variable.  For example:

```code
    int i = 0;
    while (i < 4) 
    {
        printf ("%i\n", c[i]);
        i++;
    }
```

This is a standard `while` loop that counts from 0 up to 4, and when the loop variable `i` is 4, the condition fails and the loop terminates.  Thus, the body of the loop is only executed when `i` is 0, 1, 2 and 3.


Each time through the loop we use `i` as an index into the array, printing the `i`th element.  This type of array traversal is very common.  Arrays and loops go together like fava beans and a nice Chianti.