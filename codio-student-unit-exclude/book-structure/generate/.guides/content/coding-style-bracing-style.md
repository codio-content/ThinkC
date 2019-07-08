There exist different bracing or indent styles that serve the goal to make your code more readable through the use of a consistent  indentation for control block structures. The styles differ in the way the braces are indented with the rest of the control block. This book uses the BSD/Allman Style because its is the most  readable of the four. It needs more horizontal space than the K\&R Style but it makes it very easy to track opening and closing braces.

When you are writing programs, make sure that you are using one style consistently. In larger projects all contributors should agree on the style they are using. Modern programming environments like Eclipse support you through the automatic enforcement of a single style.

```code
/*Whitesmiths Style*/
   if (condition)            
       {
       statement1; 
       statement2;
       }
```

Is named after Whitesmiths C, an early commercial C compiler that  used this style in its examples. Some people refer to it as the  One True Brace Style.

```code

/*GNU Style*/
   if (condition)
     {
       statement1;
       statement2;
     }
```

Indents are always four spaces per level, with the braces halfway between the outer and inner indent levels.

```code

/*K&R/Kernel Style*/
   if (condition) {
       statement1;
       statement2;
   }
```

This style is named after the programming examples in the book *The C Programming Language* by Brian W. Kernighan and  Dennis Ritchie (the C inventors). 

The K\&R style is the style that is hardest to read.  The opening brace happens to be at the far right side of the control statement and can be hard to find. The braces therefore have different indentation levels. Nevertheless, many C programs use this style. So you should be able  to read it.

```code

/*BSD/Allman Style*/
   if (condition)
   {
       statement1;
       statement2;
   }
```

This style is used for all the examples in this book.