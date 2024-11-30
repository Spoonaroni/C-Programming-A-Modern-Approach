#include <stdio.h>

int main(void)
{
	int n, i, j, iLast, jLast;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	int square[n][n];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			square[i][j] = 0;
		}
	}

	i = 0;
	j = (n / 2);

	for (int k = 1; k <= (n * n); k++)
	{
		square[i][j] = k;
		iLast = i;
		jLast = j;

		if (i - 1 < 0)
			i = (n - 1);
		else
			i--;
		if (j + 1 >= n)
			j = 0;
		else
			j++;
		if (square[i][j] == 0)
			continue;
		else
		{
			i = iLast + 1;
			j = jLast;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d ", square[i][j]);
		}
		printf("\n");
	}

	return 0;
}
