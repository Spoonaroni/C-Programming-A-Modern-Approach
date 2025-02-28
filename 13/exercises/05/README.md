# Exercise 13.05

(a) Write a function named `capitalize` that capitalizes all letters in its argument.
The argument will be a null-terminated string containing arbitrary characters, not
just letters. Use array subscripting to access the characters in the string. *Hint*:
Use the `toupper` function to convert each character to upper-case.  
  
(b) Rewrite the `capitalize` function, this time using pointer arithmetic to access
the characters in the string.

## Solution

(a)

```c
int capitalize(char *string)
{
    int i = 0;

    while (string[i] != '\0') {
        if (isalpha(string[i]))
            string[i] = toupper(string[i]);
        i++
    }
}
```

(b)

```c
int capitalize(char *string)
{
    char *c = string;

    while (*c != '\0') {
        if (isalpha(c))
            *c = toupper(*c);
        c++;
    }
}
```
