A few sections ago, I said that you can make up any name you want for your variables, but that's not quite true.  There are certain words that are reserved in C because they are used by the compiler to parse the structure of your program, and if you use them as variable names, it will get confused. These words, called **keywords**, include `int`, `char`, `void` and many more.

\vskip 1em

\setlength{\fboxsep}{6pt} 
\begin{boxedminipage}[c]{.9\linewidth}
\begin{multicols}{5}[\underline{Reserved keywords in the C language}]
```code
auto 
break 
case 
char 
const 
continue 
default 
do 
double 
else 
enum 
extern 
float 
for 
goto 
if 
inline 
int 
long 
register 
restrict 
return 
short 
signed 
sizeof 
static 
struct 
switch 
typedef 
union 
unsigned 
void 
volatile 
while 
_Bool 
_Complex 
_Imaginary 
```
\end{multicols} \end{boxedminipage}

\vskip 1em The complete list of keywords is included in the C Standard, which is the official language definition adopted by the the International Organization for Standardization (ISO) on September 1, 1998.  

Rather than memorize the list, I would suggest that you take advantage of a feature provided in many development environments: code highlighting.  As you type, different parts of your program should appear in different colors.  For example, keywords might be blue, strings red, and other code black.  If you type a variable name and it turns blue, watch out!  You might get some strange behavior from the compiler.