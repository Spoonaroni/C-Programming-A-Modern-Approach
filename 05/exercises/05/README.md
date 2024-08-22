## Exercise 5.05

Is the following `if` statement legal?

```C
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n)";
```

If so, what does it do when n is equal to `0`?

## Solution

The statement is legal, but for the wrong reasons. Instead of evaluating `(n >= 1 && n <= 10)`, it evaluates `((n >= 1) < 10)` -> `((0 or 1) <= 10)`. This will always lead to the if statement being true because both 0 and 1 are less than or equal to 10.