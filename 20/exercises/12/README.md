# Exercise 20.12

The following function supposedly combines two bytes to form an unsigned short
integer. Explain why the function doesn't work and show how to fix it.

```c
unsigned short create_short(unsigned char high_byte,
                            unsigned char low_byte)
{
    return high_byte << 8 + low_byte;
}
```

## Solution

The issue in this function is that the `+` operator has higher precedence than
the `<<` operator. Meaning that `8 + low_byte` will execute first, then
`high_byte << low_byte` will follow. To fix this, add parenthese.

```c
unsigned short create_short(unsigned char high_byte,
                            unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}
```

<!--NOTE: unsiged char promotes to int/unsigned int-->
