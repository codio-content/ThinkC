* Write a few lines in `main()` to test the `FunctionOne` and `FunctionTwo` functions. Invoke them a couple of times, with a few different values, and see what you get.  

  {Run!}(sh .guides/bg.sh gcc code/ex5-3.c -o code/ex5-3 ./code/ex5-3)

  By some combination of testing and examination of the code, figure out what these functions do, and give them more meaningful names.  Add comments that describe their function abstractly.

  {Check It!|assessment}(multiple-choice-1912254521)

  {Check It!|assessment}(multiple-choice-3896238666)


* Add a `prinf` statement to the beginning of both functions so that they print their arguments each time they are invoked.  This is a useful technique for debugging recursive programs, since it demonstrates the flow of execution.

  {Run!}(sh .guides/bg.sh gcc code/ex5-3.c -o code/ex5-3 ./code/ex5-3 2 )