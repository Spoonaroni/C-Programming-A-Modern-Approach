#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_LEN 20

int main(int argc, char *argv[])
{
	FILE *fp;
	char line[LINE_LEN], copy[LINE_LEN];
	int a = 26, b = 23, c = 3, j;
	long unsigned int i;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, LINE_LEN, fp) != NULL) {
		for (i = 0, j = 0; i < strlen(line); i++) {
			if (isdigit(line[i]))
				copy[j++] = line[i];
		}
		copy[j] = '\0';
		
		if (sscanf(copy, "%3d%3d%4d", &a, &b, &c) == 3)
			printf("(%d) %d-%d\n", a, b, c);
	}

	fclose(fp);
	return 0;
}
