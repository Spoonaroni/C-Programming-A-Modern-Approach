# Project 17.01

Modify the `inventory.c` program of Section 16.3 so that the `inventory` arrya is
allocated dynamically and later reallocated when it fills up. Use `malloc`
initially to allocate enough space for an array of 10 `part` structure. When the
array has no more room for new parts, use `realloc` to double its size. Repeat the
doubling step each time the array becomes full.

## Solution

See `inventory.c`
