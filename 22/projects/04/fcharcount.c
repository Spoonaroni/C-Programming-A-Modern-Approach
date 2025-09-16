#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch, char_count = 0;

	if (argc != 2) {
		fprintf(stderr, "Usage: fcharcount filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF)
		char_count++;

	printf("Number of characters in %s: %d\n", argv[1], char_count);

	fclose(fp);
	exit(EXIT_SUCCESS);
}
