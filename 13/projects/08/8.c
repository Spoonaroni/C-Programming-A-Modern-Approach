#include <ctype.h>
#include <stdio.h>

#define MAX 100

int compute_scrabble_value(const char *word);

int main(void)
{
	int sum;
	char word[MAX];

	printf("Enter a word: ");
	scanf("%s", word);

	sum = compute_scrabble_value(word);

	printf("Scrabble value: %d\n", sum);

	return 0;
}

int compute_scrabble_value(const char *word)
{
	int sum = 0,
		values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
					1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	while (*word) {
		sum += values[toupper(*word) - 65];
		word++;
	}

	return sum;
}
