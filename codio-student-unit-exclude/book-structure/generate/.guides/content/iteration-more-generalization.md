As another example of generalization, imagine you wanted a program that would print a multiplication table of any size, not just the 6x6 table.  You could add a parameter to `PrintMultTable()`:

```code
    void PrintMultTable (int high) 
    {
        int i = 1;
        while (i <= high) 
        {
            PrintMultiples (i);
            i = i + 1;
        }
    }
```
I replaced the value 6 with the parameter `high`.  If I call `PrintMultTable()` with the argument 7, I get:

```code
    1   2   3   4   5   6   
    2   4   6   8   10   12   
    3   6   9   12   15   18   
    4   8   12   16   20   24   
    5   10   15   20   25   30   
    6   12   18   24   30   36   
    7   14   21   28   35   42   
```
which is fine, except that I probably want the table to be square (same number of rows and columns), which means I have to add another parameter to `PrintMultiples()`, to specify how many columns the table should have.

Just to be annoying, I will also call this parameter `high`, demonstrating that different functions can have parameters with the same name (just like local variables):

```code
  void PrintMultiples (int n, int high) 
  {
      int i = 1;
      while (i <= high) 
      {
          printf ("%i    ", n*i);
          i = i + 1;
      }    
      printf ("\n");
  }

  void PrintMultTable (int high) 
  {
      int i = 1;
      while (i <= high) 
      {
          PrintMultiples (i, high);
          i = i + 1;
      }
  }
```
Notice that when I added a new parameter, I had to change the first line of the function, and I also had to change the place where the function is called in `PrintMultTable()`. As expected, this program generates a square 7x7 table:

```code
    1   2   3   4   5   6   7   
    2   4   6   8   10   12   14   
    3   6   9   12   15   18   21   
    4   8   12   16   20   24   28   
    5   10   15   20   25   30   35   
    6   12   18   24   30   36   42   
    7   14   21   28   35   42   49
```
When you generalize a function appropriately, you often find that the resulting program has capabilities you did not intend. For example, you might notice that the multiplication table is symmetric, because $ab = ba$, so all the entries in the table appear twice.  You could save ink by printing only half the table.  To do that, you only have to change one line of `PrintMultTable()`.  Change

```code
      PrintMultiples (i, high);
```
to

```code
      PrintMultiples (i, i);
```
and you get:

```code
    1   
    2   4   
    3   6   9   
    4   8   12   16   
    5   10   15   20   25   
    6   12   18   24   30   36   
    7   14   21   28   35   42   49  
```
I'll leave it up to you to figure out how it works.