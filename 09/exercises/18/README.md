## Exercise 9.18

Write a recursive version fo the `gcd` function (see Exercise 3). Here's the strategy to use for computing `gcd(m, n)`: If `n` is 0, return `m`. Otherwise, call `gcd`, passing `n` as the first argument and `m % n` as the second.

## Solution

```c
int gcd(int m, int n) {
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
```
