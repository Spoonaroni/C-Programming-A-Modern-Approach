## Exercise 9.13

Write the following function, which evaluates a chess position:

`int evaluate_position(char board[8][8]);`  

`board` represents a configuration of pieces on a chessboard, where the letters `K`, `Q`, `R`, `B`, `N`, `P` represent White pieces, and the letters `k`, `q`, `r`, `b`, `n`, and `p` represent Black pieces. `evaluate_position` should sum the values of the White pieces (`Q=9`, `R=5`, `B=3`, `N=3`, `P=1`). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value will be positive if White has an advantage in material and negative if Black has an advantage.

## Solution

```c
int evaluate_position(char board[8][8])
{
    char space;
    int advantage = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            space = board[i][j];

            switch(space) {
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
    }

    return advantage;
}
```
