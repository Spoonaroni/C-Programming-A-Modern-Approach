#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX 100

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
	char word1[MAX], word2[MAX];

	printf("Enter first word: ");
	scanf("%s", word1);

	printf("Enter second word: ");
	scanf("%s", word2);

	if (are_anagrams(word1, word2)) {
		printf("These words are anagrams.\n");
	} else {
		printf("These words are not anagrams.\n");
	}

	return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
	int read[26] = {0};

	while (*word1 != '\0') {
		read[toupper(*word1) - 'A'] += 1;
		word1++;
	}

	while (*word2 != '\0') {
		read[toupper(*word2) - 'A'] -= 1;
		word2++;
	}

	for (int i = 0; i < 26; i++) {
		if (read[i] != 0) {
			return false;
		}
	}

	return true;
}
