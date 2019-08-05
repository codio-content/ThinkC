As I mentioned in the last chapter, you can put as many statements as you want in `main()`.  For example, the code to the left outputs more than one line,

As you can see, it is legal to put comments at the end of a line, as well as on a line by themselves. {Run!}(sh .guides/bg.sh gcc code/goodbye.c -o code/goodbye ./code/goodbye)

The phrases that appear in quotation marks are called **strings**, because they are made up of a sequence (string) of letters.  Actually, strings can contain any combination of letters, numbers, punctuation marks, and other special characters.

Often it is useful to display the output from multiple output statements all on one line.  You can do this by leaving out the `$\backslash$n` from the first `printf`:

```code
  int main (void)
  {
        printf ("Goodbye, ");
        printf ("cruel world!\n");	     
        return (EXIT_SUCCESS);
  }
```
{Run!}(sh .guides/bg.sh gcc code/goodbye.c -o code/goodbye ./code/goodbye 2 )
 In this case the output appears on a single line as `Goodbye, cruel world!`.  Notice that there is a space between the word “Goodbye,” and the second quotation mark. This space appears in the output, so it affects the behavior of the program.

Spaces that appear outside of quotation marks generally do not affect the behavior of the program.  For example, I could have written:

```code
  int main(void)
  {
  printf("Goodbye, ");
  printf("cruel world!\n");	     
  return(EXIT_SUCCESS);
  }
```
{Run!}(sh .guides/bg.sh gcc code/goodbye.c -o code/goodbye ./code/goodbye 3 )
 This program would compile and run just as well as the original. The breaks at the ends of lines (newlines) do not affect the program's behavior either, so I could have written:

```code
  int main(void){printf("Goodbye, ");printf("cruel world!\n");
  return(EXIT_SUCCESS);}
```
{Run!}(sh .guides/bg.sh gcc code/goodbye.c -o code/goodbye ./code/goodbye 4 )
 That would work, too, although you have probably noticed that the program is getting harder and harder to read.  Newlines and spaces are useful for organizing your program visually, making it easier to read the program and locate syntax errors.