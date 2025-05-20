# Exercise 16.17

Suppose that `b` and `i` are declared as follows:

```c
enum { FALSE, TRUE } b;
int i;
```

Which of the following statements are legal? Which ones are "safe" (always yield
a meaningful result)?

(a) `b = FALSE;`
(b) `b = i;`
(c) `b++;`
(d) `i = b;`
(e) `i = 2 * b + 1;`

## Solution

(a) Legal and safe.  
(b) Legal and not safe. Without assigning a value to `i` there is no way to know
what `b` is.  
(c) Legal and not safe. If `b` is already `TRUE` or `1` then incrementing
will cause `b` to not have a useful value.  
(d) Legal and safe.  
(e) Legal and safe.
