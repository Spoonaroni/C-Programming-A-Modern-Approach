#include <stdio.h>

int power(int x, int n);

int main(void)
{
	int x = 0, n = 0;

	printf("Enter a value for x (x^n): ");
	scanf("%d", &x);

	printf("Enter a value for n (x^n): ");
	scanf("%d", &n);

	printf("The value of x^n is: %d\n", power(x, n));

	return 0;
}

int power(int x, int n)
{
	int value = 0;

	if (n == 0)
		return 1;

	if (n % 2 == 0) {
		value = power(x, n / 2);
		value *= value;
	} else {
		value = x * power(x, n - 1);
	}

	return value;
}
