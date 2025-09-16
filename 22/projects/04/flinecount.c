#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch, line_count = 0;

	if (argc != 2) {
		fprintf(stderr, "Usage: flinecount filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF)
		if (ch == '\n')
			line_count++;

	printf("Number of lines in %s: %d\n", argv[1], line_count);

	fclose(fp);
	exit(EXIT_SUCCESS);
}
