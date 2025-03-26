#include <stdio.h>

#define CHAR 20
#define WORD 30

int main(void)
{
	char sentence[WORD][CHAR+1], c, termChar;
	int i = 0, j = 0;

	printf("Enter a sentence: ");
	while ((c = getchar()) != '\n' && i < WORD) {
        if (c == ' ' || c == '\t') {
            sentence[i][j] = '\0';
            i++;
            j = 0;
            continue;
        }
        if (c == '.' || c == '!' || c == '?') {
            termChar = c;
            sentence[i][j] = '\0';
            break;
        }
        else if (j < CHAR)
            sentence[i][j++] = c;
    }

	printf("Reversal of sentence: ");
	for (; i > 0; i--) {
		printf("%s ", sentence[i]);
	}
	printf("%s%c\n", sentence[i], termChar);

	return 0;
}
