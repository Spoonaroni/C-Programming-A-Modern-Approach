#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char s;
	int sum = 0,
		value[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
					 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
					 1, 4, 4, 8, 4, 10};

	printf("Enter a word: ");

	while ((s = toupper(getchar())) != '\n')
	{
		sum += value[toupper(s) - 'A'];
	}

	printf("Scrabble value: %d\n", sum);

	return 0;
}
