A **array** is a set of values where each value is identified and referenced by a number (called an index).  The nice thing about arrays is that they can be made up of any type of element, including basic types like `int`s and `double`s,  but all the values in an array have to have the same type.


When you declare an array, you have to determine the number of elements in the array. Otherwise the declaration looks similar to other variable types:

```code
    int c[4];
    double values[10];
```



Syntactically, array variables look like other C variables except that they are followed  by `[NUMBER\_OF\_ELEMENTS]`, the number of elements in the array enclosed in square brackets.  The first line in our example, `int c[4];` is of the type "array of integers" and creates a array of four integers named `c`. The second line, `double values[10];` has the type "array of doubles" and   creates an array of 10 `double`s. 



C allows you to to initialize the element values of an array immediately after you have declared it.  The values  for the individual elements must be  enclosed in curly brakets `\{\`} and separated by comma, as in the following example:

```code
    int c[4] = {0, 0, 0, 0};
```

This statement creates an array of four elements and initializes all of them to zero. This syntax is only legal at initialisation time. Later in your program you can only assign values for the array element by element.

The following figure shows how arrays are represented in state diagrams:


\unitlength0.1cm

\begin{picture}(40,10)(-30,-5)
\put(5,1.5){{\Large `c`}}
\put(10,0){\framebox(7,5){**\textsf{0**}}}
\put(17,0){\framebox(7,5){**\textsf{0**}}}
\put(24,0){\framebox(7,5){**\textsf{0**}}}
\put(31,0){\framebox(7,5){**\textsf{0**}}}

\put(10.5,-4){{\scriptsize `c[0]`}}
\put(17.5,-4){{\scriptsize `c[1]`}}
\put(24.5,-4){{\scriptsize `c[2]`}}
\put(31.5,-4){{\scriptsize `c[3]`}}

\end{picture}

The large numbers inside the boxes are the values of the **elements** in the array.  The small numbers outside the boxes are the indices used to identify each box.  When you allocate a new array, without initializing, the arrays elements typically contain arbitrary values and you must initialise them to a meaningful value before using them.