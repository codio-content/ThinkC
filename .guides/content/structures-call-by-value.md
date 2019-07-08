When you pass a structure as an argument, remember that the argument and the parameter are not the same variable.  Instead, there are two variables (one in the caller and one in the callee) that have the same value, at least initially.  For example, when we call `PrintPoint()`, the stack diagram looks like this:

\centerline{\epsfig{figure=figs/stack_point2.pdf, width=6cm}} If `PrintPoint()` happened to change one of the member variables of `point`, it would have no effect on `blank`.  Of course, there is no reason for `PrintPoint()` to modify its parameter, so this isolation between the two functions is appropriate.

This kind of parameter-passing is called “pass by value” because it is the value of the structure (or other type) that gets passed to the function.