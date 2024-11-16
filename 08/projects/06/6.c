#include <ctype.h>
#include <stdio.h>

#define N ((int) (sizeof(message) / sizeof(message[0])))

int main(void)
{
	char message[50] = {0}, c;
	int i = 0;

	printf("Enter message: ");
	while ((c = getchar()) != '\n' && i < N)
	{
		message[i] = c;
		i++;
	}

	printf("In B1FF-speak: ");

	for (int i = 0; i < N; i++)
	{
		switch(c = toupper(message[i]))
		{
			case 'A':
				putchar('4');
				break;
			case 'B':
				putchar('8');
				break;
			case 'E':
				putchar('3');
				break;
			case 'I':
				putchar('1');
				break;
			case 'O':
				putchar('0');
				break;
			case 'S':
				putchar('5');
				break;
			default:
				putchar(c);
				break;
		}
	}
	printf("!!!!!!!!!!\n");

	return 0;
}
