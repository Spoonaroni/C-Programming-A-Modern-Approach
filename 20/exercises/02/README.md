# Exercise 20.02

Describe a simple way to "toggle" a bit (change it from 0 to 1 or from 1 to 0).
Illustrate the technique by writing a statement that toggles bit 4 of the
variable `i`.

## Solution

This can be done by using an `if` statement that tests whether `i` has a 1 or 0
in position 4. If it doesn't then we'll use an `|` (or) to set the bit. If it
does then we'll use an `&` (and) to clear the bit.

```c
i = 0x0000;

if (i & 0x0010) // tests bit 4
    i &= ~0x0010; // clears bit 4
else
    i |= 0x0010; // sets bit 4
```
