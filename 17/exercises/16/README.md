# Exercise 17.16

Write the folowing function. The call `sum(g, i, j)` should return
`g(i) + ... + g(j)`.

```c
int sum(int (*f) (int), int start, int end);
```

## Solution

```c
int sum(int (*f) (int), int start, int end)
{
    int n = 0;

    for (int i = start; i < end; i++) {
        n += (*f)(i);
    }

    return n;
}
```
