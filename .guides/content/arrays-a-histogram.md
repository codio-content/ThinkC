It is often useful to take the data from the previous tables and store them for later access, rather than just print them. What we need is a way to store 10 integers.  We could create 10 integer variables with names like `howManyOnes`, `howManyTwos`, etc.  But that would require a lot of typing, and it would be a real pain later if we decided to change the range of values.

A better solution is to use a array with length 10.  That way we can create all ten storage locations at once and we can access them using indices, rather than ten different names. Here's how:

```code
    int i;
    int upperBound = 10;
    int r_array[100000];
    int histogram[upperBound];
    int r_array_length = sizeof(r_array) / sizeof(r_array[0]);
  
    RandomizeArray(r_array, r_array_length, upperBound);

    for (i = 0; i < upperBound; i++) 
    {
        int count = HowMany(r_array, length, i);
        histogram[i] = count;
    }  
```
I called the array **histogram** because that's a statistical term for a array of numbers that counts the number of appearances of a range of values.


The tricky thing here is that I am using the loop variable in two different ways.  First, it is an argument to `HowMany()`, specifying which value I am interested in.  Second, it is an index into the histogram, specifying which location I should store the result in.