#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int num, den, n, m;

    printf("Enter a fraction: ");
    scanf("%d / %d", &num, &den);

    m = num;
    n = den;

	reduce(n, m, &num, &den);

    printf("In lowest terms: %d/%d\n", num, den);
    
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int r;
	while (numerator != 0)
    {
        r = denominator % numerator;
        denominator = numerator;
        numerator = r;
    }

    *reduced_numerator /= denominator;
    *reduced_denominator /= denominator;
}
