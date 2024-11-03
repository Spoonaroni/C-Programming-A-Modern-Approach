#include <stdio.h>

int main(void)
{
	float avg;
	int len = 0, count = 1; //HACK: Cheaty way of keeping track of the last word
	char c;

	printf("Enter a sentence: ");

	while ((c = getchar()) != '\n')
	{
		if (c == ' ')
			count++;
		else
			len++;
	}

	avg = (float) len / (float) count;
	printf("Average word length: %.1f\n", avg);

	return 0;
}
