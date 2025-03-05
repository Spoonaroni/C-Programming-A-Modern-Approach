# Exercise 13.11

The Q&A section at the end of the chapter shows how the `strcmp` function might be
writen using array subscripting. Modify the function to use pointer arithmetic instead.

## Solution

```c
int strcmp(char *s, char *t)
{
    int i;

    for (i = 0; *(s + i) == *(t + i); i++)
        if (*(s + i) == '\0')
            return 0;
    return *(s + i) - *(t + i);
}
```
