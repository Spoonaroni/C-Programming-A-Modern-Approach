## Exercise 9.19

Consider the following "mystery" function:

```c
void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
```

Trace the execution of the function by hand. Then write a program that calls the function, passing it a number entered by the user. What does the function do?

## Solution

The given function converts a decimal number into binary.
