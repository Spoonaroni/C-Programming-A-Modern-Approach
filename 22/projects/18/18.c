#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int compare_int(const void *a, const void *b);

int main(int argc, char *argv[])
{
	FILE *fp;
	int int_array[MAX],
		n = 0, largest, smallest, median;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (feof(fp) == 0 && n < MAX) {
		fscanf(fp, " %d", &int_array[n++]);
	}
	n--;

	qsort(int_array, n, sizeof(int), compare_int);

	largest = int_array[n - 1];
	smallest = int_array[0];
	if (n % 2 == 0)
		median = (int_array[n / 2] + int_array[(n / 2) + 1]) / 2;
	else
		median = int_array[n / 2];

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	printf("Median: %d\n", median);

	fclose(fp);
	return 0;
}

int compare_int(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}
