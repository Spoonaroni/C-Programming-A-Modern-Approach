# Exercise 12.17

Rewrite the following function to use pointer aritmetic instead of array subscripting.
(In other words, eliminate the variables `i` and `j` and all uses of the `[]` operator.)
Use a single loop instead of nested loops.

```c
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];

    return sum;
}
```

## Solution

```c
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    const int *p;
    int sum = 0;

    for (p = *a; p < *a + (n * LEN); p++) {
        sum += *p;
    }

    return sum;
}
```
