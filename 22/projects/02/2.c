#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch;

	if (argc != 2) {
		fprintf(stderr, "Usage: upper filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r+")) == NULL) {
		fprintf(stderr, "%s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF) {
		if (isalpha(ch) && islower(ch)) {
			putc(toupper(ch), stdout);
		} else {
			putc(ch, stdout);
		}
	}

	fclose(fp);
	return 0;
}
