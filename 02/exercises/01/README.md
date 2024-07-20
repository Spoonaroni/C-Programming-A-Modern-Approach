## Exercise 2.01

Create and run Kemighan and Ritchie's famous “hello, world" program:  

```c
#include <stdio.h>

int main(void)

{

printf("hello, world\n");

}
```

Do you get a warning message from the compiler? If so, what’s needed to make it go away?

## Solution

I did not receive any errors using gcc 14.1.1. However if I changed the standard from C99 to C89 I get this error:

```
1.c: In function ‘main’:
1.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
    6 | }
      | ^
```

To fix this error you need to put `return 0;` at the end of your `main` function (See `1b.c`).