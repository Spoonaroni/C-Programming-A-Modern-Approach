## Exercise 9.12

Write the following function:  

`double inner_product(double a[], double b[], int n);`  

The function should return `a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]`.

## Solution

```c
double inner_product(double a[], double b[], int n)
{
    int product = 0;

    for (int i = 0; i < n; i++) {
        product += (a[i] * b[i]);
    }

    return product;
}
```
