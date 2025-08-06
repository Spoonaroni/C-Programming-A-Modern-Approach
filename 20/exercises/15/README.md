# Exercise 20.15

(a) Assume that the variable `s` has been declared as follows:

```c
struct {
    int flag: 1;
} s;
```

With some compilers, executing the following statements causes 1 to be
displayed, but with other comiplers, the output is -1.  Explain the reason for
this behavior.

```c
s.flag = 1;
printf("%d\n", s.flag);
```

(b) How can this problem be avoided?

## Solution

(a) Some compilers will treat the value 1 as a sign bit to indicate whether the number
is positive or negative.

(b) To fix this, add `signed` or `unsigned` to avoid the confusion.

```c
struct {
    unsigned int flag: 1;
} s;
```
