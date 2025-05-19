# Exercise 16.12

Suppose that `u` is the following union:

```c
union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;
```

If `char` values occupy one byte, `int` values occupy four bytes, and `double`
values occupy eight bytes, how much space will a C compiler alocute for `u`?
(Assume that the compiler leaves no "holes" between members.)

## Solution

A C compiler will allocate 16 bytes to union `u` because unions only hold the size
of the largest member and since the struct `e` is the largest member, at 16 bytes,
`u` will be allocated 16 bytes.
