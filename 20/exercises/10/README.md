# Exercise 20.10

Write the following function:

```c
unsigned int reverse_bits(unsigned int n);
```

`reverse_bits` should return an unsigned integer whose bits are the same as
those in `n` but in reverse order.

## Solution

```c
unsigned int reverse_bits(unsigned int n)
{
    int int_size = sizeof(unsigned int) * 8;
    unsigned int value = 0;

    for (int i = 0; i < int_size; i++) {
        value |= n & 1; // put value of right most bit into value

        if (i != int_size - 1) // don't run on last loop
            value <<= 1; // bit shift value to the left to make space for next bit

        n >>= 1; // bit shift n to the right to get the next bit
    }

    return value;
}
```
