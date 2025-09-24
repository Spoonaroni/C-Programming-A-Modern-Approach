#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char *ext, *filename;
	unsigned char value, count;
	int pos;

	if (argc != 2) {
		fprintf(stderr, "Usage: uncompress_file filename\n");
		exit(EXIT_FAILURE);
	}
	
	// check if file ends with .rle
	ext = argv[1] + (strlen(argv[1]) - 4);
	if (strcmp(ext, ".rle") != 0) {
		fprintf(stderr, "Error: file must be .rle\n");
		exit(EXIT_FAILURE);
	}

	if ((fp1 = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	filename = malloc(strlen(argv[1]) - 4);
	strncpy(filename, argv[1], strlen(argv[1]) - 4);

	if ((fp2 = fopen(filename, "wb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", filename);
		free(filename);
		fclose(fp1);
		exit(EXIT_FAILURE);
	}
	free(filename);

	while (fread(&value, sizeof(unsigned char), 1, fp1) > 0) {
		if (pos % 2 == 0)
			count = value;
		else {
			for (int i = 0; i < count; i++)
				fwrite(&value, sizeof(unsigned char), 1, fp2);
		}
		pos++;
	}
	
	fclose(fp1);
	fclose(fp2);
	exit(EXIT_SUCCESS);
}
