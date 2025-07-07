# exercise 18.12

(a) Write a complete description of the type of the function `f` assuming that
it's declared as follows:

```c
int (*f(float (*) (long), char *)) (double);
```

(b) Give an example of how `f` would be called.

## solution

(a) `f` is a function that takes two arguments: the first is a function with an
    argument of `long` that returns `float` and the second argument is a `char *`.
    `f` returns a pointer to a function with argument of `double` and returns an
    `int`
(b)

```c
int (*pf) (double);
pf = f(fcn_ptr, string);
int n = pf(3.14);
```
