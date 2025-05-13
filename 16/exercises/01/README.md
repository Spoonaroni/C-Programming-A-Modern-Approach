# Exercise 16.01

In the following declarations, the `x` and `y` structures have members named `x`
and `y`:

```c
struct { int x, y; } x;
struct { int x, y; } y;
```

Are these declarations legal on an individual basis? Could both declaration
appear as shown in a program? Justify your answer.

## Solution

The declarations are legal both on an individual basis and can appear as shown in
a program. This is because the members of `x` and `y` are local to their
structures and therefore do not interfere with eachother, despite having the
same member names. The structs `x` and `y` are also considered different types,
even if they are defined in the same way.
