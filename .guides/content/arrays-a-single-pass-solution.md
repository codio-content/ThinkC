Although this code works, it is not as efficient as it could be.  Every time it calls `HowMany()`, it traverses the entire array.  In this example we have to traverse the array ten times!

It would be better to make a single pass through the array. For each value in the array we could find the corresponding counter and increment it.  In other words, we can use the value from the array as an index into the histogram.  Here's what that looks like:

```code
    int upperBound = 10;
    int histogram[upperBound] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (i = 0; i < r_array_length; i++) 
    {
        int index = r_array[i];
        histogram[index]++;
    }
```
The second line initializes the elements of the histogram to zeroes.  That way, when we use the increment operator (`++`) inside the loop, we know we are starting from zero. Forgetting to initialize counters is a common error.

As an exercise, encapsulate this code in a function called `Histogram()`  that takes an array and the range of values in the array (in this case 0 through 10) as two parameters `min` and `max`.  You should pass a second array to the function where a histogram of the values in the array can be stored.