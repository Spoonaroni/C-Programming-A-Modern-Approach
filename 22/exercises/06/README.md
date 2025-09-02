# Exercise 22.06

Write a call of `printf` that prints

```text
1 widget
```

if the `widget` variable (of type `int`) has the value 1, and

```text
n widgets
```

otherwise, where `n` is the value of `widget`. You are not allowed to use the
`if` statement or any other statement; the answer must be a single call of
`printf`.

## Solution

```c
printf(widget == 1 ? "%d widget\n" : "%d widgets\n", widget);
```
