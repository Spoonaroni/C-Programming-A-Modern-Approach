# Exercise 12.05

Suppose that `a` is a one-dimensional array and `p` is a pointer variable. Assuming
that the assignment `p = a` has just been performed, which of the following expression
are illegal because of mismatched types? Of the remaining expressions, which are
true (have a nonzero value)?

(a) `p == a[0]`  
(b) `p == &a[0]`  
(c) `*p == a[0]`  
(d) `p[0] == a[0]`

## Solution

(a) Illegal, `p` is a pointer, `a[0]` is an `int`  
(b) True, `p` is a pointer, `&a[0]` is also an pointer  
(c) True, `*p` is an `int`, `a[0]` is also an `int`  
(d) True, `p[0]` is an `int`, `a[0]` is also an `int`
