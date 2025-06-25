#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 20 // max length of word
#define MAX_WORD 100 // max number of words

int read_line(char str[], int n);
int compare_word(const void *str1, const void *str2);

int main(void)
{
	char *str_array[MAX_WORD];
	char *word = NULL;
	int i, num_words = 0;
	
	for (;;) {
		if (num_words == MAX_WORD) {
			printf("No space left\n");
			break;
		}

		word = malloc(MAX_WORD_LEN + 1);
		if (word == NULL) {
			printf("malloc failed\n");
			exit(EXIT_FAILURE);
		}

		printf("Enter word: ");
		read_line(word, MAX_WORD_LEN);
		if (*word == '\0') // if the user entered nothing
			break;
		
		str_array[num_words++] = word;
	}

	qsort(str_array, num_words, sizeof(char *), compare_word);

	printf("\nIn sorted order: ");
	for (i = 0; i < num_words; i++)
		printf("%s ", str_array[i]);
	printf("\n");

	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

int compare_word(const void *str1, const void *str2)
{
	
	return strcmp(
    	*(const char * const *) str1,
    	*(const char * const *) str2); // Magic that I don't understand
}
