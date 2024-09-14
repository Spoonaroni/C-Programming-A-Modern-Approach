## Project 6.02

Write a program that aska the user to enter two integers, then calculates and displays their greatest common divisor (GCD):

```c
Enter two integers: 12 28
Greatest common divisor: 4
```

*Hint*: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as follows: Let `m` and `n` be variables containing the two numbers. If `n` is 0, the stop: `m` contains the GCD. Otherwise, compute the reainder when `m` is divided by `n`. Copy `n` into `m` and copy the remainder into `n`. THen repeat the process, starting with testing whether `n` is 0.

## Solution

See `2.c`