#include <ctype.h>
#include <stdio.h>

#define MAX 100

int compute_vowel_count(const char *sentence);

int main(void)
{
	int vCount = 0;
	char c, s[MAX+1], *p = s;

	printf("Enter a sentence: ");
	while ((c = getchar()) != '\n' && p < s + MAX) {
		*p++ = c;
	}
	*p = '\0';

	vCount = compute_vowel_count(s);

	printf("Your sentence contains %d vowels.\n", vCount);

	return 0;
}

int compute_vowel_count(const char *sentence)
{
	char c;
	int i = 0;

	while (*sentence) {
		c = toupper(*sentence);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			i++;
		sentence++;
	}

	return i;
}
