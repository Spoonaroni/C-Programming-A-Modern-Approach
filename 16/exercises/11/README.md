# Exercise 16.11

Suppose that `s` is the following structure:

```c
struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;

```

If `char` values occupy one bute, `int` values occupy four bytes, and `double`
values occupy eight bytes, how much space will a C compilier allocate for `s`?
(Assume that) the compiler leaves no "holes" between members.)

## Solution

A C compiler will allocate 20 bytes for `s` because `double a` requires eight bytes,
`union e` also requires eight bytes (due to `double c` being eight bytes), and
`char f[4]` requires four bytes to account for four `char` values.
