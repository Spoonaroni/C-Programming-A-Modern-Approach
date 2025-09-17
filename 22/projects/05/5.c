/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* xor.c page 515 */
/* Performs XOR encryption */

#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
	FILE *orig_file, *new_file;
	int ch;

	if (argc != 3) {
		fprintf(stderr, "Usage: xor orig_file new_file\n");
		exit(EXIT_FAILURE);
	}

	if ((orig_file = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((new_file = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[2]);
		fclose(orig_file);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(orig_file)) != EOF) {
		ch ^= KEY;
		putc(ch, new_file);
	}

	fclose(orig_file);
	fclose(new_file);
	return 0;
}
