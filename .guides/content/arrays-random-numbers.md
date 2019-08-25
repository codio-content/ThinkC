Most computer programs do the same thing every time they are executed, so they are said to be **deterministic**.  Usually, determinism is a good thing, since we expect the same calculation to yield the same result.  For some applications, though, we would like the computer to be unpredictable.  Games are an obvious example.

Making a program truly **nondeterministic** turns out to be not so easy, but there are ways to make it at least seem nondeterministic.  One of them is to generate {pseudorandom} numbers and use them to determine the outcome of the program. Pseudorandom numbers are not truly random in the mathematical sense, but  for our purposes, they will do.


C provides a function called `rand()` that generates pseudorandom numbers.  It is declared in the header file `stdlib.h`, which contains a variety of “standard library” functions, hence the name.

The return value from `rand()` is an integer between 0 and `RAND\_MAX`, where `RAND\_MAX` is a large number (about 2 billion on my computer) also defined in the header file.  Each time you call `rand()` you get a different randomly-generated number.  To see a sample, run this loop:

```code
    for (i = 0; i < 4; i++) 
    {
        int x = rand();
        printf("%i\n", x);
    }
```
On my machine I got the following output:

```code
1804289383
846930886
1681692777
1714636915
```
You will probably get something similar, but different, on yours.

{Run!}(sh .guides/bg.sh gcc code/rand.c -o code/rand ./code/rand )

Of course, we don't always want to work with gigantic integers. More often we want to generate integers between 0 and some upper bound.  A simple way to do that is with the modulus operator.  For example:

```code
    int x = rand ();
    int y = x % upperBound;
```
Since `y` is the remainder when `x` is divided by `upperBound`, the only possible values for `y` are between 0 and `upperBound - 1`, including both end points.  Keep in mind, though, that `y` will never be equal to `upperBound`.

It is also frequently useful to generate random floating-point values. A common way to do that is by dividing by `RAND\_MAX`.  For example:

```code
    int x = rand ();
    double y = (double) x / RAND_MAX;
```
This code sets `y` to a random value between 0.0 and 1.0, including both end points.  As an exercise, you might want to think about how to generate a random floating-point value in a given range; for example, between 100.0 and 200.0.
