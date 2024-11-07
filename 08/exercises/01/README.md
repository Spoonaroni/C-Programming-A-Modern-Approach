## Exercise 8.01

We discussed using the expression `sizeof(a) / sizeof(a[0])` to calculate the number of elemnets in an array. The expression of `sizeof(a) / sizeof(t)`, where `t` is the type of `a`'s elements, would also work, but it's considered an iferior technique. Why?

## Solution

It is considered inferior because instead of just using the array to calculate the number of elements. It uses the array and another variable/macro to calculate it. Which complicates the process by making it harder to check the values of `a` and `t`.
