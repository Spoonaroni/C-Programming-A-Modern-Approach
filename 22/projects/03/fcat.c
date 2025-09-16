#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int i, ch;

	if (argc < 3) {
		fprintf(stderr, "Usage: fcat filename1 filename2 ...\n");
		exit(EXIT_FAILURE);
	}

	for (i = 1; i <= argc; i++) {
		if ((fp = fopen(argv[i], "r")) == NULL) {
			fprintf(stderr, "Error: %s can't be opened\n", argv[i]);
			exit(EXIT_FAILURE);
		} else {
			while ((ch = getc(fp)) != EOF)
				putc(ch, stdout);

			fclose(fp);
		}
	}

	exit(EXIT_SUCCESS);
}
