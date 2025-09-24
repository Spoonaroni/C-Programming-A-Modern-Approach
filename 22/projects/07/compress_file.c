#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	unsigned char held_byte, next_byte, count = 0;
	char *file_name;

	if (argc != 2) {
		fprintf(stderr, "Usage: compress_file file_name\n");
		exit(EXIT_FAILURE);
	}

	if ((fp1 = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	file_name = malloc(strlen(argv[1]) + 5);
	if (file_name == NULL) {
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	strcpy(file_name, argv[1]);
	strcat(file_name, ".rle");

	if ((fp2 = fopen(file_name, "wb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", file_name);
		free(file_name);
		fclose(fp1);
		exit(EXIT_FAILURE);
	}
	free(file_name);

	while (fread(&next_byte, sizeof(unsigned char), 1, fp1) > 0) {
		if (count == 0) {
			held_byte = next_byte;
			count++;
			continue;
		} else {
			if (next_byte == held_byte) {
				if (count >= 255) {
					fwrite(&count, sizeof(unsigned char), 1, fp2);
					fwrite(&held_byte, sizeof(unsigned char), 1, fp2);
					count = 0;
				}

				count++;
				continue;
			} else {
				fwrite(&count, sizeof(unsigned char), 1, fp2);
				fwrite(&held_byte, sizeof(unsigned char), 1, fp2);
				held_byte = next_byte;
				count = 1;
			}
		}
	}
	if (count > 0) {
		fwrite(&count, sizeof(unsigned char), 1, fp2);
		fwrite(&held_byte, sizeof(unsigned char), 1, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	exit(EXIT_SUCCESS);
}
