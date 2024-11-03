#include <stdio.h>

int main(void)
{
	char c, d;

	printf("Enter a first and last name: ");
	c = getchar(); // get initial
	while ((d = getchar()) != ' ') // skip first name and space
		;
	while ((d = getchar()) != '\n') // print last name
		printf("%c", d);
	
	printf(", %c.\n", c); // print initial

	return 0;
}
