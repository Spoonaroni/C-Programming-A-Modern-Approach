## Exercise 9.02

Write a function `check(x, y, n)` that returns 1 if both `x` and `y` fall between 0 and `n` - 1, inclusive. The function should return 0 otherwise. Assume that `x`, `y`, `n` are all of type `int`.

## Solution

```c
int check(int x, int y, int n) {
    if (x > 0 && x < n && y > 0 && y < n)
        return 1;
    else
        return 0;
}
```
