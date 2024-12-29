#include <stdio.h>

int power(int a, int b);
int compute_poly(int x);

int main(void)
{
	int x;

	printf("Enter the value of x: ");
	scanf("%d", &x);

	printf("Value of polynomial: %d\n", compute_poly(x));

	return 0;
}

int power(int a, int b)
{
	if (b == 0)
		return 1;
	else
		return a * power(a, b - 1);
}

int compute_poly(int x)
{
	int value;

	value = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - (power(x, 2)) + (7 * x) - 6;

	return value;
}
