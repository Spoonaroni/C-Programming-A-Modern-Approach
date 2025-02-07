# Exercise 12.02

Suppose that `high`, `low`, and `middle` are all pointer variables of the same type,
and that `low` and `high` point to elements of an array. Why is the following
statement illegal, and how could it be fixed?

```c
middle = (low + high) / 2;
```

## Solution

The statement is illegal because pointers cannot be added. However, they can be subtracted.

```c
middle = ((high - low) / 2) + low;
```
