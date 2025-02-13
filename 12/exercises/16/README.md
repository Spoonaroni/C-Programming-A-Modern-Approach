# Exercise 12.16

Write a loop that prints the highest temperature in the `temperatures` array (see
Exercise 14) for each day of the week. The loop body should call the `find_largest`
funciton, passing it one row of the array at a time.

## Solution

```c
int highest;

for (int i = 0; i < 7; i++) {
    highest = find_largest(temperature[i], 24);
    printf("Day %d: %d", i+1, highest);
}
```
