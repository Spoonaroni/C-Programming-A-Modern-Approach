# Project 21.01

Write a program that declares the `s` structure (see Section 21.4) and prints
the sizes and offsets fo the `a`, `b`, and `c` members. (Use `sizeof` to find
sizes; use `offsetof` to find offsets.) Have the program print the size of the
entire structure as well. From the information, determine whether or not the
structure has any holes. If it does, describe the location and size of each.

## Solution

See `1.c`

Output:

```text
Size of struct s: 16

Size of a: 1
Offset of a: 0

Size of b: 8
Offset of b: 4

Size of c: 4
Offset of c: 12
```

There is a hole of 3 bytes between members `a` and `b`. If there were no holes
the offset of `b` would be 1
