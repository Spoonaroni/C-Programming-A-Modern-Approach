# Exercise 13.07

Suppose that `str` is an array of characters. Which one of the following statements
is not equivalent to the other three.

```text
(a) *str = 0;
(b) str[0] = '\0';
(c) strcpy(str, "");
(d) strcat(str, "");
```

## Solution

(d) is not equivalent to the other three statements because `strcat` puts the null
character at the end of `str` while the other statements put it at the beginning.
This means that while the other statements effectively have empty strings (starting
with the null character), (d) won't have the same effect.
