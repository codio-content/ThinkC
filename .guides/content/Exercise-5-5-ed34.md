The following algorithm is known as Euclid's Algorithm because it appears in Euclid's *Elements* (Book 7, ca. 300 B.C.). It may be the oldest nontrivial algorithm.

The algorithm is based on the observation that, if $r$ is the remainder when $a$ is divided by $b$, then the common divisors of $a$ and $b$ are the same as the common divisors of $b$ and $r$. Thus we can use the equation

<center> $gcd (a, b) = gcd (b, r)$ </center>

to successively reduce the problem of computing a GCD to the problem of computing the GCD of smaller and smaller pairs of integers.

For example,

<center> $gcd (36, 20) = gcd (20, 16) = gcd (16, 4) = gcd (4, 0) = 4 $ </center>

implies that the GCD of 36 and 20 is 4.  It can be shown that for any two starting numbers, this repeated reduction eventually produces a pair where the second number is 0.  Then the GCD is the other number in the pair.

Write a function called `gcd` that takes two integer parameters and that uses Euclid's algorithm to compute and return the greatest common divisor of the two numbers.

{Run!}(sh .guides/bg.sh gcc code/ex5-5.c -o code/ex5-5 ./code/ex5-5)
