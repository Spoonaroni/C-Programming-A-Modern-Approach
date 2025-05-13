# Exercise 16.04

Repeat Exercise 3, but this time using a *type* named `Complex`.

## Solution

(a)

```c
typedef struct {
    double real, imaginary;
} Complex;
```

(b)

```c
Complex c1, c2, c3;
```

(c)

```c
Complex make_complex(double real, double imaginary)
{
    Complex s = { real, imaginary };

    return s;
}
```

(d)

```c
Complex add_complex(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;
}
```
