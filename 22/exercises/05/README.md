# Exercise 22.05

Is there any difference between the `printf` conversion specifications `%.4d`
and `%04d`? If so, explain what it is.

## Solution

There is no difference between the given conversion specifications. Both will
provide a integer value with the minimun number of digits being 4. If the number
of digits is less than 4, the value will be padded with leading 0s.
