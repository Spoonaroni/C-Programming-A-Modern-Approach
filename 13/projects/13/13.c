#include <stdio.h>

#define N 80

void encrypt(char *message, int shift);

int i;

int main(void)
{
	char message[N] = {0}, c;
	int n;
	
	printf("Enter message to be encrypted: ");
	for (i = 0; (c = getchar()) != '\n' && i < N; i++)
	{
		message[i] = c;
	}
	
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	encrypt(message, n);

	return 0;
}

void encrypt(char *message, int shift)
{
	printf("Encrypted message: ");
	for (int j = 0; j < i; j++)
	{
		if (message[j] >= 'A' && message[j] <= 'Z')
			message[j] = ((message[j] - 'A') + shift) % 26 + 'A';
		else if (message[j] >= 'a' && message[j] <= 'z')
			message[j] = ((message[j] - 'a') + shift) % 26 + 'a';

		putchar(message[j]);
	}

	printf("\n");

	return;
}
