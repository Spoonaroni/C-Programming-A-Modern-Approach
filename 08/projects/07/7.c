#include <stdio.h>

#define N 5

int main(void)
{
	int sums[N][N] = {0}, row = 0, col = 0;

	for (int i = 0; i < N; i++)
	{
		printf("Enter row %d: ", (i + 1));

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &sums[i][j]);
		}
	}

	printf("\nRow totals: ");

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			row += sums[i][j];
		}
		printf("%d ", row);
		row = 0;
	}

	printf("\nColumn totals: ");

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			col += sums[j][i];
		}
		printf("%d ", col);
		col = 0;
	}

	printf("\n");

	return 0;
}
