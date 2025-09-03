# Exercise 22.11

The following loop appears in the `fcopy.c` program:

```c
while ((ch =  getc(source_fp)) != EOF)
    putc(ch, dest_fp);
```

Suppose that we neglected to put parenthese around `ch = getc(source_fp)`:

```c
while (ch = getc(source_fp) != EOF)
    putc(ch, dest_fp);
```

Would the program compile without an error? If so, what would the program do
when it's run?

## Solution

Yes, the program will compile without an error. When the program is run, it will
evaluate `getc(source_fp) != EOF` and then will evaluate `ch = 1` (or `ch = 0`
at EOF). This is because `!=` has a higher precedence than `=`.
