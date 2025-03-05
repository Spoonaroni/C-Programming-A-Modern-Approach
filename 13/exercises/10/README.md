# Exercise 13.10

The following functions supposedly creates an identical copy of a string. What's
wrong with the function?

```c
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```

## Solution

The issue is that `q` is undefined and has no length. So copying `p` into `q` could
cause undefined behavior.
