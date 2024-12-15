## Exercise 9.09

What will be the output of the following program?

```c
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

## Solution

The output would be:  

`i = 1, j = 2`  

This is because functions are passed by value. Which means the `swap` function only recieved a copy of `i` and `j` not the actual variables. So the `swap` function is essentially doing nothing.
