One not-very-efficient way to sort the elements of an array is to find the largest element and swap it with the first element, then find the second-largest element and swap it with the second, and so on.

1.  Write a function called `IndexOfMaxInRange()` that takes an array of integers, finds the largest element in the given range, and returns its `index`.

1. Write a function called `SwapElement()` that takes an array of integers and two indices, and that swaps the elements at the given indices.

1. Write a function called `SortArray()` that takes an array of integers and that uses `IndexOfMaxInRange()` and `SwapElement()` to sort the array from largest to smallest.


{Run!}(sh .guides/bg.sh gcc code/ex7-3.c -o code/ex7-3 ./code/ex7-3 )