# Exercise 14.01

Write parameterized macros that compute the following values.

(a) The cube of `x`.  
(b) The remainder when `n` is divided by 4.  
(c) 1 if the product of `x` and `y` is less than 100, 0 otherwise.  

Do your macros always work? If not, describe what arguments would make them fail.

## Solution

```c
#define CUBE(x) ((x)*(x)*(x))
```

(a) Works with numbers, but if `x` is a `char` or `string` then it will provide
unexpected results.

```c
#define REMAINDER(n) ((n)%4)
```

(b) Works with numbers, but if `x` is a `char` or `string` then it will provide
unexpected results.

```c
#define LESSTHAN100(x,y) (((x) * (y)) < 100 ? 1 : 0)
```

(c) Works with numbers, but if `x` is a `char` or `string` then it will provide
unexpected results.
