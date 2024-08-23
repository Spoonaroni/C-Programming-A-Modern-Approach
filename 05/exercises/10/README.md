## Exercise 5.10

What output does the following program fragment produce? (Assume that `i` is an integer)

```
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```

## Solution

The output will be `onetwo` because there are no `break` statements.