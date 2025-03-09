#include <stdio.h>
#include <string.h>

#define MAX 20

int main(void)
{
	char s[MAX+1] = {'0'}, smallest_word[MAX+1] = "zzzzzzzzzzzzzzzzzzzz", largest_word[MAX+1] = "aaaaaaaaaaaaaaaaaaaa";

	while (strlen(s) != 4) {
		printf("Enter word: ");
		scanf("%s", s);
		
		if ((strcmp(s, smallest_word)) < 0) {
			strcpy(smallest_word, s);
		}
		if ((strcmp(s, largest_word)) > 0) {
			strcpy(largest_word, s);
		}
	}

	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);

	return 0;
}
