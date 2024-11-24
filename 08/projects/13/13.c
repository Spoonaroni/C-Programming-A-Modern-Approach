#include <stdio.h>

int main(void)
{
	char c, d[20] = {0};
	int i = 0;

	printf("Enter a first and last name: ");
	c = getchar(); // get initial
	while ((d[i] = getchar()) != ' ') // skip first name and space
		;
	
	printf("You entered the name: ");
	while ((d[i] = getchar()) != '\n')
		printf("%c", d[i++]);
	
	printf(", %c.\n", c); // print initial

	return 0;
}
