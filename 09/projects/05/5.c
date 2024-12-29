#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
	int n, i, j;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	char square[n][n]; // char will over-flow past 11, unsigned char will over-flow past 21

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			square[i][j] = '0';
		}
	}

	create_magic_square(n, square);

	print_magic_square(n, square);

	return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
	int i = 0, iLast, jLast;
	int j = (n / 2);

	for (int k = 1; k <= (n * n); k++)
	{
		magic_square[i][j] = (char) k;
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
		if (magic_square[i][j] == '0')
			continue;
		else
		{
			i = iLast + 1;
			j = jLast;
		}
	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d ", magic_square[i][j]);
		}
		printf("\n");
	}
}
