# Exercise 14.07

Let `GENERIC_MAX` be the following macro:

```c
#define GENERIC_MAX(type)           \
type type##_max(type x, type y)     \
{                                   \
    return x > y ? x : y;           \
}
```

(a) Show the preprocessor's expansion of `GENERIC_MAX(long)`.  
(b) Explain why `GENERIC_MAX` doesn't work for basic types such as
`unsigned long`.  
(c) Describe a technique that would allow us to use `GENERIC_MAX` with basic types
such as `unsigned long`. *Hint*: Don't change the definition of `GENERIC_MAX`.

## Solution

(a)

```c
long long_max(long x, long y)
{
    return x > y ? x : y;
}
```

(b) Due to a space separating unsigned and long, the name of the created function
would have a space in it. For example:  

```c
unsigned long unsigned long_max(unsigned long x, unsigned long y)
```

(c) To fix the issue presented in (b), we would need to use `typedef`.  

```c
typedef unsigned long ulong.
```
