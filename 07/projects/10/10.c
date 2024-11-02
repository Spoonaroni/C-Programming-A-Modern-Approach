#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int vCount = 0;
	char c;

	printf("Enter a sentence: ");
	while ((c = getchar()) != '\n')
	{
		c = toupper(c);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			vCount++;
	}

	printf("Your sentence contains %d vowels.\n", vCount);

	return 0;
}
