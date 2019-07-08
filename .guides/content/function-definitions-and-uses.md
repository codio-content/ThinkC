Pulling together all the code fragments from the previous section, the whole program looks like this:

```code
  #include <stdio.h>
  #include <stdlib.h>

  void PrintNewLine (void) 
  {
      printf ("\n");
  }

  void PrintThreeLines (void)
  {
      PrintNewLine ();  PrintNewLine ();  PrintNewLine ();
  }

  int main (void)
  {
     printf ("First Line.\n");
     PrintThreeLines ();
     printf ("Second Line.\n");
     return EXIT_SUCCESS;
  }

```

This program contains three function definitions: `PrintNewLine()`, `PrintThreeLine()`, and `main()`.

Inside the definition of `main()`, there is a statement that uses or calls `PrintThreeLine()`.  Similarly, `PrintThreeLine()` calls `PrintNewLine()` three times.  Notice that the definition of each function appears above the place where it is used.

This is necessary in C; the definition of a function must appear before (above) the first use of the function.  You should try compiling this program with the functions in a different order and see what error messages you get.