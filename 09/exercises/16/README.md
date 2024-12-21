## Exercise 9.16

Condense the `fact` function in the same way we condensed `power`.

## Solution

```c
int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}
```
