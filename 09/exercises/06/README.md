## Exercise 9.06

Write a function `digit(n, k)` that returns the `kth` digit (from the right) in `n` (a positive integer). For example, ` digit(829, 1)` returns 9, `digit(829, 2)` returns 2, and `digit(829, 3)` returns 8. If `k` is greater than the number of digits in `n`, have the function return 0.

## Solution

```c
int digit(int n, int k) {
    while (k > 1) {
        n /= 10;
        if (n <= 0) {
            return 0;
        }
        k--;
    }

    return n % 10;
}
```
