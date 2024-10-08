## Exercise 5.03

The following program fragments illustrate the short-circuit behavior of logical expressive. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

```
(a) i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);
(b) i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);
(c) i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);
(d) i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
```

## Solution

(a) 1 3 4 5, `i < j` -> `1` (++j < k) <- ignored  
(b) 0 7 8 9, `i - 7` -> `0` (j++ < k) <- ignored  
(c) 1 8 8 9, `(i = j)` -> `1` (j = k) <- ignored  
(d) 1 2 1 1, `++i` -> `1` (++j && ++k) <- ignored