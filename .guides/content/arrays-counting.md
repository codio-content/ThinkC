A good approach to problems like this is to think of simple functions that are easy to write, and that might turn out to be useful.  Then you can combine them into a solution.  This approach is sometimes called **bottom-up design**.  

Of course, it is not easy to know ahead of time which functions are likely to be useful, but as you gain experience you will have a better idea. Also, it is not always obvious what sort of things are easy to write, but a good approach is to look for subproblems that fit a pattern you have seen before.


In our current example we want to examine a potentially large set of elements and count the number of times a certain value appears. You can think of this program as an example of a pattern called “traverse and count.”  The elements of this pattern are:



*  A set or container that can be traversed, like a string or a array.
*  A test that you can apply to each element in the container.
*  A counter that keeps track of how many elements pass the test. 

In this case, I have a function in mind called `HowMany()` that counts the number of elements in a array that are equal to a given value. The parameters are the array, the length of the array and the integer value we are looking for.  The return value is the number of times the value appears.

```code
    int HowMany (int array[], int length, int value) 
    {
        int i; 
        int count = 0;
  
        for (i=0; i < length; i++) 
            {
                if (array[i] == value) count++;
            }
        return count;
    }
```