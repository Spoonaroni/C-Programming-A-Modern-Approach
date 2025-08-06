# Exercise 20.14

When stored according to the IEEE floating-point standard, a `float` value
consists of a 1-bit sign (the leftmost--or most significant--bit), an 8-bit
exponent, and a 23-bit fraction, in that order. Design a structure type that
occupies 32 bits, with bit-fields to have type `unsigned int`. Check the manual
for your compiler to determie the order of the bit-fields.

## Solution

```c
struct my_float {
    unsigned int fraction: 23,
                 exponent: 8,
                 sign: 1;
}
```

<!--NOTE: This is ordered according to GCC-->
