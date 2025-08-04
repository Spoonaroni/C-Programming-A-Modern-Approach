# Exercise 20.08

Let `f` be the following function:

```c
unsigned int f(unsigned int i, int m, int n)
{
    return (i >> (m + 1 - n)) & ~(~0 << n);
}
```

(a) What is the value of `~(~0 << n)`?  
(b) What does this function do?

## Solution

(a) Makes the first `n` bits of 0 (00000000) turn into 1s. If `n` is equal to
four then the result will be 00001111.

(b) The functions returns the range of `n` bits from `i` starting at position
`m` from the right. For example, if `i = 11011001`, `m = 5`, and `n = 4`, the
function will return a range of four bits from 11011001 starting at bit 5 from
the right (11 0110 01).
