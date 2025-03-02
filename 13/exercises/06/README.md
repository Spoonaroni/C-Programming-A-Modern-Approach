# Exercise 13.06

Write a function named `censor` that modifies a sting by repleacing every occurence
of `foo` by `xxx`. For example, the string "food fool" would become "xxxd xxxl".
Make the function as short as possible without sacrificing clarity.

## Solution

```c
char *censor(char *str)
{
    char *str2 = str;

    while (*str2 != '\0') {
        if (*str1 == 'f' && *(str1 + 1) == 'o' && *(str1 + 2) == 'o') {
            *str2 = 'x';
            *(str2 + 1) = 'x';
            *(str2 + 2) = 'x';
        }
        str2++;
    }

    return str2;
}
```
