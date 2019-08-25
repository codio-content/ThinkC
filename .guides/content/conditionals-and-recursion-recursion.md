I mentioned in the last chapter that it is legal for one function to call another, and we have seen several examples of that.  I neglected to mention that it is also legal for a function to call itself.  It may not be obvious why that is a good thing, but it turns out to be one of the most magical and interesting things a program can do.

For example, look at the [Countdown function](open_file code/recursion.c panel=0 ref="void Countdown" count=12)

The name of the function is `Countdown()` and it takes a single integer as a parameter.  If the parameter is zero, it outputs the word “Blastoff.”  Otherwise, it outputs the parameter and then calls a function named `Countdown()`---itself---passing `n-1` as an argument.

What happens if we call this function [like this](open_file code/recursion.c panel=0 ref="int main" count=6)

The execution of `Countdown()` begins with `n=3`, and since `n` is not zero, it outputs the value 3, and then calls itself...



> The execution of `Countdown()` begins with `n=2`, and
> since `n` is not zero, it outputs the value 2, and then
> calls itself...
> 
>> The execution of `Countdown()` begins with `n=1`, and
>> since `n` is not zero, it outputs the value 1, and then
>> calls itself...
>>>
>>> The execution of `Countdown()` begins with `n=0`, and
>>> since `n` is zero, it outputs the word “Blastoff!”
>>> and then returns.
>>>
>>>The Countdown that got `n=1` returns.
>>
>>The Countdown that got `n=2` returns.
>
>The Countdown that got `n=3` returns.

{Run!}(sh .guides/bg.sh gcc code/recursion.c -o code/recursion ./code/recursion)

Total output looks like:

```code
    3
    2
    1
    Blastoff!
```
As a second example, let's look again at the functions `PrintNewLine()` and `PrintThreeLines()`.

```code
  void PrintNewLine () 
    {
        printf ("\n");
    }

  void PrintThreeLines () 
    {
        PrintNewLine ();  PrintNewLine ();  PrintNewLine ();
    }
```
Although these work, they would not be much help if I wanted to output 2 newlines, or 106.  A better alternative would be

```code
    void PrintLines (int n) 
    {
        if (n > 0) 
        {
            printf ("\n");
            PrintLines (n-1);
        }
    }
```
This program is similar to `Countdown`; as long as `n` is greater than zero, it outputs one newline, and then calls itself to output `n-1` additional newlines.  Thus, the total number of newlines is `1 + (n-1)`, which usually comes out to roughly `n`.


The process of a function calling itself is called **recursion**, and such functions are said to be **recursive**.