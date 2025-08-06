# Exercise 20.11

Each of the following macros define the position of a single bit within an
integer:

```c
#define SHIFT_BIT 1
#define CTRL_BIT 2
#define ALT_BIT 4
```

The following statement is supposed to test whether any of the three bits have
been set, but it never displays the specified message. Explain why the statement
doesn't work and show how to fix it. Assume that `key_code` is an `int` variable.

```c
if (key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0)
    printf("No modifier keys pressed\n");
```

## Solution

The `==` operator has higher precedence than the `&` operator. This cause the
`if` statement to evaluate `(SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0` (which has
the value 0), then it will check if `key_code & 0` is not equal to zero (which
it always is). To fix this, just add parentheses:

```c
if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
    printf("No modifier keys pressed\n");
```
