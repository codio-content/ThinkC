Now that we have created some variables, we would like to store values in them.  We do that with an **assignment statement**.

```code
    first_letter = 'a';   /* give first_letter the value 'a' */
    hour = 11;            /* assign the value 11 to hour */
    minute = 59;          /* set minute to 59 */
```
This example shows three assignments, and the comments show three different ways people sometimes talk about assignment statements.  The vocabulary can be confusing here, but the idea is straightforward:



*  When you declare a variable, you create a named storage location.
*  When you make an assignment to a variable, you give it a value. 

A common way to represent variables on paper is to draw a box with the name of the variable on the outside and the value of the variable on the inside.  This kind of figure is called a **state diagram** because is shows what state each  variable is in (you can think of it as the variable's “state of mind”). This diagram shows the effect of the three assignment statements:


\setlength{\unitlength}{1mm}
\begin{picture}(20,17)
\put(7,12){\large `first\_letter`}
\put(46,12){\large `hour`}
\put(74,12){\large `minute`}
\put(10,0){\framebox(20,10){{\large \textsf{a}}}}
\put(40,0){\framebox(20,10){{\large \textsf{11}}}}
\put(70,0){\framebox(20,10){{\large \textsf{59}}}}
\end{picture}

When we assign values to variables, we have to make sure that the assigned value correspondents to the type of the variable. In C  a variable has to have the same type as the value you assign.  For example, you cannot store a string in an `int` variable.  The following statement generates a compiler warning:

```code
    int hour;
    hour = "Hello.";       /* WRONG !! */
```
This rule is sometimes a source of confusion, because there are many ways that you can convert values from one type to another, and C sometimes converts things automatically.  But for now you should remember that as a general rule variables and values have the same type, and we'll talk about special cases later.

Another source of confusion is that some strings *look* like integers, but they are not.  For example, the string `"123"`, which is made up of the characters `1`, `2` and `3`, is not the same thing as the *number* `123`. This assignment is illegal:

```code
    minute = "59";         /* WRONG!! */
```