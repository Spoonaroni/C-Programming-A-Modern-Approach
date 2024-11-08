## Exercise 8.05

The Fibonacci numbers are `0, 1, 1, 2, 3, 5, 8, 13, ...,` where each number is the sum of the two preceding numbers. Write a program fragmnet that declares an array named `fib_numbers` of length 40 and fills the array with the first 40 Fibonacci numbers. *Hint*: Fill in the first two numbers individually, then use a loop to compute the remaining numbers.

## Solution

```c
int fib_numbers[40] = {0, 1};
for (int i = 2; i < 40; i++)
{
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i -2];
}
```
