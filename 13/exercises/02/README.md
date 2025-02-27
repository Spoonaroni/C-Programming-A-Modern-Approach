# Exercise 13.02

Suppose that `p` has been declared as follows:

```c
char *p = "abc";
```

Which of the following function calls are legal? Show the output produced by each
legal call, and explain why the others are illegal.

```text
(a) putchar(p);
(b) putchar(*p);
(c) puts(p);
(d) puts(*p);
```

## Solution

(a) Illegal, `putchar` requires a `char` not a pointer  
(b) Legal, this would output `a`  
(c) Legal, this would output `abc\n`  
(d) Illegal, `puts` requires a pointer
