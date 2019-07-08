You probably have noticed that our `RandomizeArray()` function  looked a bit unusual. We pass an array to this function and expect  to get a a randomized array back. Nevertheless, we have declared it to  be a `void` function, and miraculously the function appears to have  altered the array.

This behaviour goes against everything what I have said about the use of variables in functions so far. C typically uses the so called **call-by-value** evaluation of expressions. If you pass a value to a function it gets copied from the calling function to a variable in the called function. The same is true if the function returns a value. Changes to the internal variable in the called function do not affect the external  values of the calling function.

When we pass an array to a function this behaviour changes to something called **call-by-reference** evaluation. C does not copy the array to an internal array --  it rather generates a reference to the original array and any operation in the called function  directly affects the original array. This is also the reason why we do not have to return anything from our  function. The changes have already taken place. 

Call by reference also makes it necessary to supply the length of the array to the called function, since invoking  the `sizeof` operator in the called function would determine the size of the reference and not the original array.

We will further discuss call by reference and call by value in  Section 8.7, Section 9.6 and 9.7.