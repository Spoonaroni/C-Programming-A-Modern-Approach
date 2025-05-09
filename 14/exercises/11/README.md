# Exercise 14.11

(C99) C programmers often use the `fprintf` function to write error messages:

```c
fprintf(stderr, "Range error: index = %d\n", index);
```

`stderr` is C's "standard error" stream; the remaining arguments are the same as
those for `printf`, starting with the format string. Write a macro named `ERROR`
that generates the call of `fprintf` shown above when given a format string and
the items to be displayed:

```c
ERROR("Range error: index = %d\n", index);
```

## Solution

```c
#define ERROR(string, ...) fprintf(stderr, (string), __VA_ARGS__);
```
