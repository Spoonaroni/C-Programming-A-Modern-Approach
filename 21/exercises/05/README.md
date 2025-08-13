# Exercise 21.05

The `islower` function, which belongs to `<ctype.h>`, tests whether a character
is a lower-case letter. Why would the following macro version of `islower` not
be legal, according to the C standard? (You may assume that the character set is
ASCII.)

```c
#define islower(c) ((c) >= 'a' && (c) <= 'z')
```

## Solution

A parameterized macro that replaces a library function should evaluate its
arguments only once. This version of `tolower` evaluates `c` twice.
