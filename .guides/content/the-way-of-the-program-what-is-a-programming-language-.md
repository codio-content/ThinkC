The programming language you will be learning is C, which was developed in the early 1970s by Dennis M. Ritchie at the Bell Laboratories.  C is an example of a **high-level language**; other high-level languages you might have heard of are Pascal, C++ and Java.

As you might infer from the name “high-level language,” there are also **low-level languages**, sometimes referred to as machine language or assembly language.  Loosely-speaking, computers can only execute programs written in low-level languages.  Thus, programs written in a high-level language have to be translated before they can run.  This translation takes some time, which is a small disadvantage of high-level languages.


But the advantages are enormous.  First, it is *much* easier to program in a high-level language; by “easier” I mean that the program takes less time to write, it's shorter and easier to read, and it's more likely to be correct.  Secondly, high-level languages are **portable**, meaning that they can run on different kinds of computers with few or no modifications.  Low-level programs can only run on one kind of computer, and have to be rewritten to run on another.

Due to these advantages, almost all programs are written in high-level languages.  Low-level languages are only used for a few special applications.


There are two ways to translate a program; **interpreting** or **compiling**.  An interpreter is a program that reads a high-level program and does what it says.  In effect, it translates the program line-by-line, alternately reading lines and carrying out commands.

![figs/Interpreter-page-001](figs/Interpreter-page-001.jpg)

A compiler is a program that reads a high-level program and translates it all at once, before executing any of the commands. Often you compile the program as a separate step, and then execute the compiled code later.  In this case, the high-level program is called the **source code**, and the translated program is called the **object code** or the **executable**.

As an example, suppose you write a program in C.  You might use a text editor to write the program (a text editor is a simple word processor).  When the program is finished, you might save it in a file named `program.c`, where “program” is an arbitrary name you make up, and the suffix `.c` is a convention that indicates that the file contains C source code.

Then, depending on what your programming environment is like, you might leave the text editor and run the compiler.  The compiler would read your source code, translate it, and create a new file named `program.o` to contain the object code, or `program.exe` to contain the executable. 

![figs/Compiler-page-001](figs/Compiler-page-001.jpg)

The next step is to run the program, which requires some kind of executor.  The role of the executor is to load the program (copy it from disk into memory)  and make the computer start executing the program. 


Although this process may seem complicated, in most programming environments (sometimes called development environments), these steps are automated for you.  Usually you will only have to write a program and press a button or type a single command to compile and run it.  On the other hand, it is useful to know what the steps are that are happening in the background, so that if something goes wrong you can figure out what it is.