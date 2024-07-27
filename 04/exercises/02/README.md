## Exercise 4.02

If i and j are positive integers, does (-i) / j always have the same value as -(i/j)? Justify your answer.

## Solution

Yes, in C99. No, in C89. This is because in C89 the answer can either be rounded up or down, resulting in `-1` or `-2`. But in C99 the result is always truncated toward `0`, resulting in `-1`.