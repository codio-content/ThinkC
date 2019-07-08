As a general rule, you should always choose meaningful names for  your identifiers. Ideally the name of a variable or function already explains its behaviour or use.

It may be more typing effort to use a function named  `FindSubString()`  rather than  `FndSStr()`. However, the former is almost self describing  and might save you a lot in debugging-time.   

**Don't use single letter variable names!**

Similarly to functions, you should give your variables names that speak for themselves and make clear what values will be stored by this variable. There are few noticeable exceptions to this rule: People use `i`, `j` and `k` as counter variables in loops and for spacial coordinates people use `x`, `y` and `z`. Use these conventions if they suit you. Don't try to invent new conventions all by yourself.


The following capitalization style shold be used for the different elements in your program. The consistent use of one style gives the programmer and the reader of the source code a quick way to determine the meaning of different items in your program:


* **variableNames: ** variable names always start with lower-case, multiple words are separated by capitalizing the first letter.
* **CONSTANTS: ** use all upper case letters. In order to avoid name space collisions it might be necessary to use a prefix such as `MY\_CONSTANT`.
* **FunctionNames:** start always with upper case and should possibly contain a verb describing the function. Names for functions that test values should start with '`Is`' or '`Are`'.
* **UserDefinedTypes\_t:** always end in '`\_t`'. Type names names must be capitalised in order to avoid conflict with POSIX names.
* **pointerNames\_p:** in order to visually separate pointer variables from ordinary variables you should consider ending pointers with '`\_p`'.