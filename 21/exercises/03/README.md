# Exercise 21.03

When a macro hides a function, which must come first in the header file: the
macro definition or the function prototype? Justify your answer.

## Solution

The function prototype must come first. This is because the preprocessor needs
to know which function it is hiding.
