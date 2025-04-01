#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX 100

bool is_palindrome(const char *message);

int main(void)
{
	char c, message[100], *p = message;

	printf("Enter a message: ");
	while ((c = getchar()) != '\n') {
		if (isalpha(c)){
			*p++ = tolower(c);
		}
	}
	*p-- = '\0';
	
	if (is_palindrome(message) == true)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");

	return 0;
}

bool is_palindrome(const char *message)
{
	const char *p = message, *q = message;

	while (*p)
		p++;
	p--;

	while (p >= message) {
		if (*p-- != *q++) {
			return false;
		}
	}

	return true;
}
