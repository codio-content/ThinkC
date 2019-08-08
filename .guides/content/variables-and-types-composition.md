So far we have looked at the elements of a programming language---variables, expressions, and statements---in isolation, without talking about how to combine them.

One of the most useful features of programming languages is their ability to take small building blocks and **compose** them.  For example, we know how to multiply integers and we know how to output values; it turns out we can do both at the same time:

```code
    printf ("%i\n", 17 * 3);
```

{Run!}(sh .guides/bg.sh gcc code/composition.c -o code/composition ./code/composition )

Actually, I shouldn't say “at the same time,” since in reality the multiplication has to happen before the output, but the point is that any expression, involving numbers, characters, and variables, can be used inside an output statement.  We've already seen one example:

```code
    printf ("%i\n", hour * 60 + minute);
```
You can also put arbitrary expressions on the right-hand side of an assignment statement:

```code
    int percentage;
    percentage = (minute * 100) / 60;
```
This ability may not seem so impressive now, but we will see other examples where composition makes it possible to express complex computations neatly and concisely.

{Run!}(sh .guides/bg.sh gcc code/composition.c -o code/composition ./code/composition 2 )

WARNING: There are limits on where you can use certain expressions; most notably, the left-hand side of an assignment statement has to be a *variable* name, not an expression. That's because the left side indicates the storage location where the result will go.  Expressions do not represent storage locations, only values.  So the following is illegal:  `minute + 1 = hour;`.