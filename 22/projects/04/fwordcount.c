#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch, word_count = 1;
	bool in_word = false;

	if (argc != 2) {
		fprintf(stderr, "Usage: fwordcount filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF) {
		if (ch != ' ') {
			if (!in_word) {
				word_count++;
				in_word = true;
			}
		} else {
			in_word = false;
		}
	}

	printf("Number of words in %s: %d\n", argv[1], word_count);

	fclose(fp);
	exit(EXIT_SUCCESS);
}
