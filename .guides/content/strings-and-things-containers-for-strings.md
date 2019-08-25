We have seen four types of values---characters, integers, floating-point numbers and strings---but only three types of variables---`char`, `int` and `double`.  So far we have no way to store a string in a variable or perform operations on strings.

This chapter is going to rectify this situation and I can now tell you that strings in C are stored as an array of characters terminated by the  character `\0`.

By now this explanation should make sense to you and you probably understand why we had to learn quite a bit about the working of the language  before we could turn our attention towards string variables.

In the previous chapter we have seen that operations on arrays have  only minimal support from the C language itself and we had to program extra functions by ourselves. Fortunately things are a little bit easier when we manipulate these special types of arrays - called strings.  There exist a number of library functions in `string.h` that make string handling a bit easier than operations on pure arrays. 

Nevertheless string operations in  C are still a lot more cumbersome than their equivalence in other programing languages and can be a  potential source of errors in your programs, if not handled  carefully.