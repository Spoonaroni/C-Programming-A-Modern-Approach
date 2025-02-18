#include <stdio.h>

#define MAX 100

int main(void)
{
	char c, termChar, words[MAX] = {0}, *p, *q;

	printf("Enter a sentence: ");
	for (p = words; (c = getchar()) != '\n' && p < words + MAX; p++) {
		if (c == '.' || c == '!' || c == '?') {
			termChar = c;
			break;
		}
		*p = c;
	}

	printf("Reversal of sentence: ");
	while (p >= words) {
		while (*--p != ' ' && p != words)
			;
		q = p == words ? words : p + 1;
		while (*q != ' ' && *q != '\0')
			putchar(*q++);
		if (p >= words)
			putchar(' ');
	}
	printf("%c\n", termChar);

	return 0;
}
