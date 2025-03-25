#include <stdio.h>

#define MAX 100

double compute_average_word_length(const char *sentence);

int main(void)
{
	float avg;
	char sentence[MAX+1];

	printf("Enter a sentence: ");
	gets(sentence); 
	//NOTE: gets() is deprecated, but to follow the book properly I will use it anyway.
	//NOTE: The modern way of doing the same thing is with fgets(). "fgets(sentence, sizeof(sentence), stdin);"

	avg = compute_average_word_length(sentence);

	printf("Average word length: %.1f\n", avg);

	return 0;
}

double compute_average_word_length(const char *sentence)
{
	double avg;
	int len = 0, count = 1;
	char c;

	while (*sentence) {
		c = *sentence;
		if (c == ' ')
			count++;
		else
			len++;
		sentence++;
	}

	avg = (float) len / (float) count;

	return avg;
}
