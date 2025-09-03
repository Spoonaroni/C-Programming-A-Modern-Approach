# Exercise 22.08

In previous chapters, we've used the `scanf` format string `" %c"` when we
wanted to skip white-space characters and read a nonblank character. Some
programmers use `"%1s"` instead. Are the two techniques equivalent? If not, what
are the differences?

## Solution

The two techniques are not equivalent. Both achieve the same goal of skipping
white-space and reading a nonblank character. However, `"%1s"` will add a `\0`
to the end of the string while `" %c"` does not.
