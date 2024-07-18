## Exercise 05

Suppose that we call `scanf` as follows:  

```c
scanf("%f%d%f", &x, &i, &y);
```

If the user enters

```
12.3 45.6 789
```

What will be the values of `x`, `i`, and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable.)

## Solution

```
x = 12.3
i = 45
y = 0.600000
```

`x` is 12.3 and stops because there can't be a space in a `float`. `i` then takes 45, but stops because there can't be a decimal point in an `int`. `y` then becomes 0.600000 to pick up where `i` left off, but stops because there can't be a space in a `float`. Leaving 789 for the next call of `scanf`.