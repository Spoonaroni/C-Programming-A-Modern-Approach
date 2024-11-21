#include <stdio.h>

#define N 5

int main(void)
{
	int sums[N][N] = {0}, totals[N] = {0}, avg[N] = {0}, qAvg[N] = {0}, qHigh[N] = {0}, qLow[N];

	for (int i = 0; i < N; i++)
		qLow[i] = 100;

	for (int i = 0; i < N; i++)
	{
		printf("Student %d: ", (i + 1));

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &sums[i][j]);
		}
	}

	// Student stats (rows)
	
	printf("\nStudent totals: ");

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			totals[i] += sums[i][j];
		}
		printf("%d ", totals[i]);
		avg[i] = (totals[i] / N);
		totals[i] = 0;
	}

	printf("\nStudent averages: ");

	for (int i = 0; i < N; i++)
		printf("%d ", avg[i]);

	// Quiz stats (columns)

	printf("\nQuiz averages: ");

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (sums[j][i] > qHigh[i])
			{
				qHigh[i] = sums[j][i];
			}
			if (sums[j][i] < qLow[i])
			{
				qLow[i] = sums[j][i];
			}
			totals[i] += sums[j][i];
		}
		qAvg[i] = (totals[i] / N);
		printf("%d ", qAvg[i]);
	}

	printf("\nQuiz highest scores: ");

	for (int i = 0; i < N; i++)
	{
		printf("%d ", qHigh[i]);
	}

	printf("\nQuiz lowest scores: ");

	for (int i = 0; i < N; i++)
	{
		printf("%d ", qLow[i]);
	}

	printf("\n");

	return 0;
}
