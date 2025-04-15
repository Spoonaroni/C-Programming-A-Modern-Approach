# Exercise 14.08

Suppose we want a macro that expands into a string conatining the current line
number and file name. In other words, we'd like to write

```c
const char *str = LINE_FILE;
```

and have it expand into

```c
const char *str = "Line 10 of file foo.c";
```

where `foo.c` is the file containing the program and 10 is the line on which the
invocation of `LINE_FILE` appears. *Warning*: This exercise is for experts only.
Be sure to read the Q&A section carefully before attempting!

## Solution

```c
#define STRINGIZE(x) #x
#define EXPANDMACRO(x) STRINGIZE(x)
#define LINE_FILE "Line " EXPANDMACRO(__LINE__) " of file " __FILE__
```

`STRINGIZE` and `EXPANDMACRO` exist because `__LINE__` will return a number
not a string. However, we can't just put `#__LINE__` because that will expand
to `"__LINE__"` not the line number we want. To fix this, we call `EXPANDMACRO`
which will make sure the `__LINE__` returns the line number and then gives that
number to `STRINGIZE` which then turns the number into a string literal.
