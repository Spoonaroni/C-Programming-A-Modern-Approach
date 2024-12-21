## Exercise 9.15

The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one `return` statement.

```c
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

## Solution

```c
double median(double x, double y, double z) {
    double med = x;

    if (x <= y && y <= z || z <= y && y <= x)
        med = y;
    if (x <= z && z <= y || y <= z && z <= x)
        med = z;

    return med;
}
```
