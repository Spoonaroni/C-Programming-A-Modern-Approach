# Exercise 14.13

(a) Show what the following program will look like after preprocessing. YOu may ignore
any lines added to the program as a result of including the `<stdio.h>` header.

```c
#include <stdio.h>

#define N 100

void f(void);

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}
```

(b) What will be the output of this program?

## Solution

(a)

```c
/* Lines from <stdio.h> */

void f(void);

int main(void)
{
    f();

    // N is undefined by the #undef N

    return 0;
}

void f(void)
{


    // N is undefined by the time the preprocesser gets here
    printf("N is undefined\n"); 

}
```

(b) The output will be `N is undefined`
