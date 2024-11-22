#include <stdio.h>
#include <stdlib.h> // srand() and rand()
#include <time.h> // time()

#define N 10

int main(void)
{
	char map[N][N] = {0};
	int randVal, row = 0, col = 0, i = 1;
	srand((unsigned) time(NULL));

	// Make every index '.' except for the first one
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			map[i][j] = '.';
		}
	}

	map[row][col] = 'A';

	while (i < 26)
	{
		int count[4] = {0, 0, 0, 0};

		// Finds available moves
		if (col - 1 >= 0 && map[row][col - 1] == '.')
			count[0] = 1;
		if (col + 1 < N && map[row][col + 1] == '.')
			count[1] = 1;
		if (row - 1 >= 0 && map[row - 1][col] == '.')
			count[2] = 1;
		if (row + 1 < N && map[row + 1][col] == '.')
			count[3] = 1;

		if (count[0] + count[1] + count[2] + count[3] == 0)
			break;

		randVal = rand() % 4;

		switch(randVal)
		{
			case 0:
				if (count[0] == 1)
				{
					map[row][--col] = i + 65;
					i++;
					break;
				}
			case 1:
				if (count[1] == 1)
				{
					map[row][++col] = i + 65;
					i++;
					break;
				}
			case 2:
				if (count[2] == 1)
				{
					map[--row][col] = i + 65;
					i++;
					break;
				}
			case 3:
				if (count[3] == 1)
				{
					map[++row][col] = i + 65;
					i++;
					break;
				}
			default:
				break;
		}
	}

	// Print all indexes
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}
