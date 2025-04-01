#include <stdio.h>

#define MAX 100

void reverse(char *message);

int main(void)
{
	char c, charArray[MAX], *p = charArray;

	printf("Enter a message: ");
	while ((c = getchar()) != '\n' && p < charArray + MAX) {
		*p++ = c;
	}
	*p = '\0';

	reverse(charArray);

	return 0;
}

void reverse(char *message)
{
	char temp, *first = message, *last = message;

	while (*last)
		last++;
	last--;

	while (first < last) {
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}
	
	printf("Reversal is: ");
	printf("%s\n", message);
}
