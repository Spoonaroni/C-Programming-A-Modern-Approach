# Exercise 17.15

Show the output of the following program and explain what it does.

```c
#include <stdio.h>

int f1(int (*f) (int));
int f2(int i);

int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f) (int))
{
    int n = 0;

    while ((*f) (n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}
```

## Solution

The output is 3. This program will run until `(*f) (n)` returns 0. Which when
`n` starts as 0, it will go until `n` is equal to 3. This is because
`3 * 3 + 3 - 12` retuns 0.  
