#include <stdio.h>

#define MAX 100

int main(void)
{
	char c, charArray[MAX], *p = charArray;

	printf("Enter a message: ");
	while ((c = getchar()) != '\n' && p < charArray + MAX) {
		*p++ = c;
	}

	p--;
	printf("Reversal is: ");
	while (p >= charArray) {
		putchar(*p--);
	}
	printf("\n");

	return 0;
}
