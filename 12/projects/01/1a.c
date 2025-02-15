#include <stdio.h>

#define MAX 100

int main(void)
{
	char c, charArray[MAX];
	int i = 0;

	printf("Enter a message: ");
	while ((c = getchar()) != '\n') {
		charArray[i++] = c;
	}

	printf("Reversal is: ");
	while (i >= 0) {
		putchar(charArray[i--]);
	}
	printf("\n");

	return 0;
}
