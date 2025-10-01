#include <stdio.h>
#include <stdlib.h>

#define LINE_SIZE 25

int main(int argc, char *argv[])
{
	FILE *fp;
    int itemNum, m, d, y;
    float unitPrice;
	char str[LINE_SIZE+1];

	if (argc != 2) {
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("Item\t\t\tUnit\t\t\tPurchase\n");
	printf("\t\t\tPrice\t\t\tDate\n");

	fgets(str, sizeof(str), fp);
	while (sscanf(str, "%d,%f,%d/%d/%d", &itemNum, &unitPrice, &m, &d, &y) == 5) {
		printf("%-4d\t\t\t$%7.2f\t\t%d/%d/%d\n", itemNum, unitPrice, m, d, y);
		fgets(str, sizeof(str), fp);
	}

    return 0;
}
