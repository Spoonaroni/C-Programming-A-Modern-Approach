#include <stdio.h>

int main(void)
{
	char c, termChar, words[100] = {0};
	int i = 0, j = 0;

	printf("Enter a sentence: ");
	c = getchar();
	while (c != '.' && c != '?' && c != '!')
	{
		words[i] = c;
		c = getchar();
		i++;
	}
	termChar = c;
	words[i] = '\0';

	printf("Reversal of sentence: ");
	for (i -= 1; i >= 0; i--)
	{
		if (words[i] == ' ' || i == 0)
		{
			j = i;
			if (i == 0)
			{
				while (words[j] != ' ' && words[j] != '\0')
				{
					printf("%c", words[j]);
					j++;
				}
			}
			else
			{
				while (words[j + 1] != ' ' && words[j + 1] != '\0')
				{
					printf("%c", words[j + 1]);
					j++;
				}
				printf(" ");
			}
		}
	}
	printf("%c\n", termChar);

	return 0;
}
