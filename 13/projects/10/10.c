#include <stdio.h>

#define MAX 100

void reverse_name(char *name);

int main(void)
{
	char name[MAX+1], c, *p = name;

	printf("Enter a first and last name: ");
	while ((c = getchar()) != '\n' && p < name + MAX) {
		*p++ = c;
	}
	*p = '\0';
	reverse_name(name);

	return 0;
}

void reverse_name(char *name)
{
	char c;

	c = *name++;
	while (*name++ != ' ')
		;
	
	printf("%s, %c.\n", name, c);
}
