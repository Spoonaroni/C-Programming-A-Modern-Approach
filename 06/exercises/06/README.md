## Exercise 6.06

Translate the program fragment of Exercise 1 into a single `for` statement.

## Solution

```c
for (int i = 1; i <= 128; i *= 2;)
{
    printf("%d ", i);
}
```