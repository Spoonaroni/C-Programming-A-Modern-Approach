# Exercise 15.03

We saw that writing `#include <file>` insteads of `#include "file"` may not work
if `file` is one that we've written. Would there be any problem with writing
`#include "file"` instead of `#include <file>` if `file` is a system header.

## Solution

As long as the `file` system header does not share a name with a header file in
the current working directory, it will work fine. However, it may be confusing
to someone else reading the code as they might expect that `file` is not a
system header due to the use of quotation marks rather than angled brackets.
