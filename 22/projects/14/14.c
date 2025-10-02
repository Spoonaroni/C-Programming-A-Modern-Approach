#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 80

int main(void)
{
	FILE *fp_in, *fp_out;
	char c, filename[N];
	int n;

	printf("Enter name of file to be encrypted: ");
	scanf("%s", filename);

	if ((fp_in = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", filename);
		exit(EXIT_FAILURE);
	}

	strcat(filename, ".enc");

	if ((fp_out = fopen(filename, "w")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", filename);
		fclose(fp_in);
		exit(EXIT_FAILURE);
	}
	
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);
	while ((c = fgetc(fp_in)) != EOF)
	{
		if (c >= 'A' && c <= 'Z')
			fputc(((c - 'A') + n) % 26 + 'A', fp_out);
		else if (c >= 'a' && c <= 'z')
			fputc(((c - 'a') + n) % 26 + 'a', fp_out);
		else
			fputc(c, fp_out);
	}
	
	fclose(fp_in);
	fclose(fp_out);
	exit(EXIT_SUCCESS);
}
