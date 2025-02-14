# Exercise 12.18

Write the `evaluate_position` function described in Exercise 13 of Chapter 9. Use
pointer arithmetic--not subscipting--to visit array elements. Use a single loop
instead of nested loops.

## Solution

```c
int evaluate_position(char board[8][8])
{
    char *p;
    int advantage = 0;

    for (p = *board; p < *board + (8 * 8); p++) {
        switch(*p) {
            case 'Q':
                advantage += 9;
                break;
            case 'q':
                advantage -= 9;
                break;
            case 'R':
                advantage += 5;
                break;
            case 'r':
                advantage -= 5;
                break;
            case 'B':
                advantage += 3;
                break;
            case 'b':
                advantage -= 3;
                break;
            case 'N':
                advantage += 3;
                break;
            case 'n':
                advantage -= 3;
                break;
            case 'P':
                advantage += 1;
                break;
            case 'p':
                advantage -= 1;
                break;
            default:
                break;
        }
    }

    return advantage;
}
```
