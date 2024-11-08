## Exercise 8.11

Write a program fragment that declares an 8 x 8 `char` array named `checker_board` and then uses a loop to store the following data into the array (one character per array element):

```
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
```

Hint: The element in row `i`, column `j`, should be the letter `B` if `i + j` is an even number.

## Solution

```c
#define N 8
char checker_board[N][N];

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        if ((i + j) % 2 == 0)
            checker_board[i][j] = 'B';
        else
            checker_board[i][j] = 'R';
    }
}
```
