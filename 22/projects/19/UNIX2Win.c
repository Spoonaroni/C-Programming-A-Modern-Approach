#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp_in, *fp_out;
	int ch;

	if (argc != 3) {
		fprintf(stderr, "Usage: UNIX2Win input_file output_file\n");
		exit(EXIT_FAILURE);
	}

	if ((fp_in = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fp_out = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fp_in)) != EOF) {
		if (ch == '\x0a')
			putc('\x0d', fp_out);
		putc(ch, fp_out);
	}

	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
