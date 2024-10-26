## Exercise 7.14

Does the following statement always compute the fracitonal part of `f` correctly (assuming that `f` and `frac_part` are `float` variables)?

`frac_part = f - (int) f`

If not, what's the problem?

## Solution

No, if the value of `f` is larger than an `int` it will fail
