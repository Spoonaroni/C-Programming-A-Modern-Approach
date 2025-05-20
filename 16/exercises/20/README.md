# Exercise 16.20

Suppose that the `direction` variable is declared in the following way:

```c
enum { NORTH, SOUTH, EAST, WEST } direction;
```

Let `x` and `y` be `int` variables. Write a `switch` statement that tests the
value of `direction`, incrementing `x` is `direction` is `EAST`, decrementing
`x` if `direction` is `WEST`, incrementing `y` is `direction` is `SOUTH`, and
decrementing `y` if `direction` is `NORTH`.

## Solution

```c
switch(direction) {
    case EAST:
        x++;
        break;
    case WEST:
        x--;
        break;
    case NORTH:
        y++;
        break;
    case SOUTH:
        y--;
        break;
    default:
        break;
}
```
