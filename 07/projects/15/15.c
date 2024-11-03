#include <stdio.h>

int main(void)
{
	float d = 1;
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{
		d *= i;
	}

	printf("Factorial of %d: %f\n", n, d);

	return 0;
}
