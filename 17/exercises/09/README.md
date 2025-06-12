# Exercise 17.09

True or false: If `x` is a structure and `a` is a member of that structure, then
`(&x)->a` is the same as `x.a`. Justify your answer.

## Solution

True, by using `(&x)` the structure `x` is turned into a pointer. By then using
the `->` operator, the pointer is dereferenced and the member `a` is accessed just
like `x.a`.
