# Exercise 17.05

Suppose that `f` and `p` are declared as follows:

```c
struct {
    union {
    char a, b;
    int c;
    } d;
    int e[5];
} f, *p = &f;
```

Which of the following statements are legal?  
`(a) p->b = ' ';`  
`(b) p->e[3] = 10;`  
`(c) (*p).d.a = '*';`  
`(d) p->d->c = 20;`  

## Solution

(a) Illegal, `p->b` does not work because `b` is not a member of `f`. The correct
way would be `p->d.b = ' ';`  
(b) Legal.  
(c) Legal.  
(d) Illegal, `p->d` is correct, but `d->c` is incorrect because `d` is not a
pointer. The correct way would be `p->d.c = 20;`  
