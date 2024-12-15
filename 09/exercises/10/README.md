## Exercise 9.10

Write functions that return the following values. (Assume that `a` and `n` are parameters, where `a` is an array `int` values and `n` is the length of the array.)

```
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
```

## Solution

(a)
```c
int large(int a[], int n)
{
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }

    return largest;
}
```

(b)
```c
int average(int a[], int n)
{
    int avg = 0;

    for (int i = 0; i < n; i++)
    {
        avg += a[i];
    }

    return avg / n;
}
```

(c)
```c
int positive(int a[], int n)
{
    int amount = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            amount++;
    }

    return amount;
}
```
