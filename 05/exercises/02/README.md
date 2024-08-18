## Exercise 5.02

The following program fragments illustrate the logical operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.  

```
(a) i = 10; j = 5;
    printf("%d", !i < j);
(b) i = 2; j = 1;
    printf("%d", !!i + !j);
(c) i = 5; j = 0; k = -5;
    printf("$d", i && j || k);
(d) i = 1; j = 2; k = 3;
    printf("%d", i < j || k)
```

## Solution

(a) 1, `!i` -> `0`, `0 < j` -> `1`  
(b) 1, `!!i` -> `!0` -> `1`, `!j` -> `0`, `1 + 0 = 1`  
(c) 1, `(i && j) || k` -> `1 || k` -> `1`
(d) 1, `(i < j) || k` -> `1 || k` -> `1`