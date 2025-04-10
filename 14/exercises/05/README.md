# Exercise 14.05

Let `TOUPPER` be the following macro:

```c
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
```

Let `s` be a `string` and let `i` be an `int` variable. Show the output produced
by each of the following program fragments.

(a)

```c
strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i]));
```

(b)

```c
strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i]));
```

## Solution

(a) 'D', `++i` is evaluated three times due to `c` being equal to `s[++i]`  
(b) 2, similar to what happens in (a), but `++i` is evaluated twice.
