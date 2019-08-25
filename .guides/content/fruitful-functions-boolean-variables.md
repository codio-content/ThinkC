Since boolean values are not supported directly in C, we can not declare variables of the type boolean.  Instead, programmers typically use the `short` datatype in combination with  preprocessor definitions to store truth values.

```code
  #define FALSE 0
  #define TRUE 1
   ...
  short fred;
  fred = TRUE;
  short testResult = FALSE;
```
The [first line is a simple variable declaration;](open_file code/bool.c panel=0 ref="//decleration" count=2) the [second line is an assignment,](open_file code/bool.c panel=0 ref="//assignment" count=2) and the [third line is a combination of a declaration and as assignment,  called an initialization.](open_file code/bool.c panel=0 ref="//initialization" count=2)

[Remove highlighting](open_file code/bool.c panel=0)

As I mentioned, the result of a comparison operator is a boolean, so you can store it in a variable

```code
  short evenFlag = (n%2 == 0);     /* true if n is even */
  short positiveFlag = (x > 0);    /* true if x is positive */
```
and then use it as part of a conditional statement later

```code
  if (evenFlag) 
  {
      printf("n was even when I checked it");
  }
```
A variable used in this way is called a **flag**, since it flags the presence or absence of some condition.

{Run!}(sh .guides/bg.sh gcc code/bool.c -o code/bool ./code/bool)