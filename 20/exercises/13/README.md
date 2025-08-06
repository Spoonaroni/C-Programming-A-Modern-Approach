# Exercise 20.13

If `n` is an `unsigned int` variable, what effect does the following statement
have on the bits in `n`?

```c
n &= n - 1; // n = n & n - 1
```

*Hint*: Consider the effect on `n` if this statement is executed more than once.

## Solution

This statement will take the right most bit that is set to 1 and set it to zero.
