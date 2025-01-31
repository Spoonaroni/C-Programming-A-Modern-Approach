# Exercise 11.04

Write the following funciton:

```c
void swap(int *p, int *q);
```

When passed the addresses of two variables, `swap` should exchange
the values of the varibales:

```c
swap(&i, &j); /*exhanges values of i and j */
```

## Solution

```c
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
```
