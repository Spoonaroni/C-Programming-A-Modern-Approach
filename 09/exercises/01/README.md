## Exercise 9.01

The following function, which computes the area of a triangle, contains two errors. Locate the errors and show how to fix them. (*Hint*: There are no errors in the formula.)

```c
double triangle_area(double base, height)
double product;
{
    product = base * height;
    return product / 2;
}
```

## Solution

The two errors in the sample function are:
`1` The `height` parameter needs to have `double` before it, just like `base` does.
`2` The use of `double product;` attempts to use an obsolete way of defining functions where the parameter type is set after the function declaration. However, this is not the correct way to do so. For it to work properly, `double product;` would need to be replaced by `double base, height` and then declare product inside of the braces. Plus the `double` before the parameter `base` would need to be removed.

Here is the corrected version:

```c
double triangle_area(double base, double height) // Or remove the type double, before each parameter, and put 'double base, height' below this line
{
    double product = base * height;
    return product / 2;
}
```
