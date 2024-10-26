## Exercise 7.04

if `c` is a variable type `char`, which one of the following statements is illegal?

```
(a) i += c; /* i has type int */
(b) c = 2 * c - 1;
(c) putchar(c);
(d) printf(c);
```

## Solution

(a) Legal  
(b) Legal  
(c) Legal  
(d) Not Legal. `printf` does not work that way; it would need to be `printf("%c", c);`  
