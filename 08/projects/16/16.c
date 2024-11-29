#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int read[26] = {0};
	char c;

	printf("Enter first word: ");

	while ((c = getchar()) != '\n')
	{
		if (isalpha(c))
		{
			c = toupper(c) - 65;
			read[(int) c] += 1;
		}
	}

	printf("Enter second word: ");

	while ((c = getchar()) != '\n')
	{
		if (isalpha(c))
		{
			c = toupper(c) - 65;
			read[(int) c] -= 1;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (read[i] != 0)
		{
			printf("The words are not anagrams.\n");
			return 0;
		}
	}

	printf("The words are anagrams.\n");

	return 0;
}
