As I mentioned, C converts `int`s to `double`s automatically if necessary, because no information is lost in the translation.  On the other hand, going from a `double` to an `int` requires rounding off.  C doesn't perform this operation automatically, in order to make sure that you, as the programmer, are aware of the loss of the fractional part of the number.

The simplest way to convert a floating-point value to an integer is to use a **typecast**.  Typecasting is so called because it allows you to take a value that belongs to one type and “cast” it into another type (in the sense of molding or reforming, not throwing).

The syntax for typecasting requires the explicit specification of the target type, set in parenthesis before the expression `(Type)`. For example:

```code
  const double PI = 3.14159;
  int x = (int) PI;
```
The `(int)` operator casts the value of PI into an integer, so `x` gets the value 3.  Converting to an integer always rounds down, even if the fraction part is 0.99999999.

For every type in C, there is a corresponding operator that typecasts its argument to the appropriate type.