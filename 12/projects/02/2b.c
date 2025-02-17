#include <ctype.h>
#include <stdio.h>

#define MAX 100

int main(void)
{
	char c, message[100], *p = message, *q = message;

	printf("Enter a message: ");
	while ((c = getchar()) != '\n') {
		if (isalpha(c)){
			*p++ = tolower(c);
		}
	}

	p--;

	while (p >= message) {
		if (*p-- != *q++) {
			printf("Not a palindrome\n");
			return 0;
		}
	}

	printf("Palindrome\n");

	return 0;
}
