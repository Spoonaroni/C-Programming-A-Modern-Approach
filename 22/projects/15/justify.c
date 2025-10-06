/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* justify.c (Chapter 15, page 363) */
/* Formats a file of text */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
	char word[MAX_WORD_LEN+2];
	int word_len;
	FILE *fp_in, *fp_out;

	if (argc != 3) {
		fprintf(stderr, "Usage: %s input_file output_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}


	if ((fp_in = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fp_out = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[2]);
		fclose(fp_in);
		exit(EXIT_FAILURE);
	}

	clear_line();
	for (;;) {
		read_word(word, MAX_WORD_LEN+1, fp_in);
		word_len = strlen(word);
		if (word_len == 0) {
			flush_line(fp_out);
			return 0;
		}
		if (word_len > MAX_WORD_LEN)
			word[MAX_WORD_LEN] = '*';
		if (word_len + 1 > space_remaining()) {
			write_line(fp_out);
			clear_line();
		}
		add_word(word);
	}

	fclose(fp_in);
	fclose(fp_out);
	exit(EXIT_SUCCESS);
}
