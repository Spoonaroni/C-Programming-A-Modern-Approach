## Exercise 9.17

Rewrite the `fact` function so that it is no longer recursive.

## Solution

```c
int fact(int n)
{
    for (int i = (n - 1); i >= 1; i--) {
        n *= (n - i);
    }

    return n;
}
```
