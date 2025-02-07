# Exercise 12.03

What will be the contents of the `a` array after the following statements are executed?

```c
#define N 10

int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p = &a[0], *q = &a[N-1], temp;

while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
}
```

## Solution

The contents of the `a` array would be:

```text
{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
```

### Horrible explanation

`temp` becomes `*p` which is `a[0]` which is 1,  
`temp` is now 1,  
`*p` which is `a[0]` then becomes `*q` which is `a[N-1]` which is 10,  
`a[0]` is now 10,  
`*p` which is `a[0]` increments from the `++` operator and becomes `a[1]`,  
`*p` is now `a[1]`,  
`*q` which is `a[N-1]` then becomes `temp` which is 1,  
`a[N-1]` or `a[9]` is now 1,  
`*q` which is `a[N-1]` decrements from the `--` operator and becomes `a[N-2]`  
`*q` is now `a[N-2]` or `a[8]`,  
repeat until the `*p` is greater than `*q`,  
meaning until `*p` is `a[6]` and `*q` is `[5]`  
(I hope I'm not wrong, my brain hurts)
