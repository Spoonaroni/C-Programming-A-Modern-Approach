# Exercise 16.07

Assume that the `fraction` structure contains two members: `numerator` and `denominator`
(both of type `int`). Write functions that perform the following operation on fractions:

(a) Reduce the fraction `f` to lowest terms. *Hint:* To reduce a fraction to
lowest terms, first compute the greatest common divisor (GCD) of the numerator
and denominator. Then divide both the numerator and denominator by the GCD.  
(b) Add the fractions `f1` and `f2`.  
(c) Subtract the fraction `f2` from the fraction `f1`.  
(d) Multiply the fractions `f1` and `f2`.  
(e) Divide the fraction `f1` by the fraction `f2`.  

The fractions `f`, `f1`, and `f2` will be arguments of type `struct fraction`;
each function will return a value of type `struct fraction`. The fractions
returned by the functions in parts (b)-(e) should be reduced to lowest terms.
*Hint:* You may use the function from part (a) to help write the functions in
parts (b)-(e).

## Solution

(a)

```c
struct fraction reduce_frac(struct fraction f)
{
    int temp, num = f.numerator, den = f.denominator;

    while (num % den != 0) {
        temp = den;
        den = num % den;
        num = temp;
    }

    f.numerator /= den;
    f.denominator /= den;
    return f;
}
```

(b)

```c
struct fraction add_frac(struct fraction f1, struct fraction f2)
{
    struct fraction final_frac;

    final_frac.numerator = (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator);
    final_frac.denominator = f1.denominator * f2.denominator;

    return reduce_frac(final_frac);
}
```

(c)

```c
struct fraction add_frac(struct fraction f1, struct fraction f2)
{
    struct fraction final_frac;

    final_frac.numerator = (f1.numerator * f2.denominator) - (f1.denominator * f2.numerator);
    final_frac.denominator = f1.denominator * f2.denominator;

    return reduce_frac(final_frac);
}
```

(d)

```c
struct fraction mult_frac(struct fraction f1, struct fraction f2)
{
    struct fraction final_frac;

    final_frac.numerator = f1.numerator * f2.numerator;
    final_frac.denominator = f1.denominator * f2.denominator;

    return reduce_frac(final_frac);
}
```

(e)

```c
struct fraction mult_frac(struct fraction f1, struct fraction f2)
{
    struct fraction final_frac;

    final_frac.numerator = f1.numerator * f2.denominator;
    final_frac.denominator = f1.denominator * f2.numerator;

    return reduce_frac(final_frac);
}
```
