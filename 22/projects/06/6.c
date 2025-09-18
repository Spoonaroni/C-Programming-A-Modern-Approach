#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int offset = 0, i, n;
	unsigned char buffer[10];

	if (argc != 2) {
		fprintf(stderr, "Usage: display filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("Offset              Bytes              Characters\n");
	printf("------  -----------------------------  ----------\n");

	while (1) {
		n = fread(buffer, 1, 10, fp);
		if (n == 0)
			break;
		printf("%6d  ", offset);
		offset += n;

		for (i = 0; i < 10; i++) {
			if (i >= n)
				printf("   ");
			else
				printf("%.2X ", buffer[i]);
		}
		printf(" ");
		for (i = 0; i < 10; i++) {
			if (i >= n)
				printf(" ");
			else if (isprint(buffer[i]))
				printf("%c", buffer[i]);
			else
				printf(".");
		}
		printf("\n");
	}

	fclose(fp);
	return 0;
}
