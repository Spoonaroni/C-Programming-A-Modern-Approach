#include <stdio.h>

int main(void)
{
	float n, otherN;
	char c;

	printf("Enter an expression: ");
	scanf("%f", &n);

	while ((c = getchar()) != '\n')
	{
		switch (c)
		{
			case '+':
				scanf("%f", &otherN);
				n += otherN;
				break;
			case '-':
				scanf("%f", &otherN);
				n -= otherN;
				break;
			case '*':
				scanf("%f", &otherN);
				n *= otherN;
				break;
			case '/':
				scanf("%f", &otherN);
				n /= otherN;
				break;
			default:
				break;
		}
	}

	printf("Value of expression: %f \n", n);

	return 0;
}
