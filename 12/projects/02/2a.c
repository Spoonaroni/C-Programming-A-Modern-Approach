#include <ctype.h>
#include <stdio.h>

#define MAX 100

int main(void)
{
	char c, message[100];
	int i = 0, j = 0;

	printf("Enter a message: ");
	while ((c = getchar()) != '\n') {
		if (isalpha(c)){
			message[i++] = tolower(c);
		}
	}

	i--;

	while (i >= 0) {
		if (message[i--] != message[j++]) {
			printf("Not a palindrome\n");
			return 0;
		}
	}

	printf("Palindrome\n");

	return 0;
}
