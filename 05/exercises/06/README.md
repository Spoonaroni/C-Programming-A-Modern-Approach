## Exercise 5.06

Is the following `if` statement legal?

```C
if (n == 1-10)
    printf("n is between 1 and 10\n");
```
if so, what does it do when n is equal to 5?

## Solution

Yes, this `if` statement is legal, but won't do what is expected. It will only work if n is equal to -9, because `1 - 10` is evaluated first.