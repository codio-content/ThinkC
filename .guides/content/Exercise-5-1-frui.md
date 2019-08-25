If you are given three sticks, you may or may not be able to arrange them in a triangle.  For example, if one of the sticks is 12 inches long and the other two are one inch long, it is clear that you will not be able to get the short sticks to meet in the middle.  For any three lengths, there is a simple test to see if it is possible to form a triangle:

>"If any of the three lengths is greater than the sum of the other two, then you cannot form a triangle.  Otherwise, you can."

Write a function named `IsTriangle()` that it takes three integers as arguments, and that returns either `TRUE` or `FALSE`, depending on whether you can or cannot form a triangle from sticks with the given lengths.

{Run!}(sh .guides/bg.sh gcc code/ex5-1.c -o code/ex5-1 ./code/ex5-1)

The point of this exercise is to use conditional statements to write a function that returns a value.
