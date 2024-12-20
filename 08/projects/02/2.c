/* Checks numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{

	int digit_seen[10] = {0}, digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0)
	{
		digit = n % 10;
		digit_seen[digit] += 1;
		n /= 10;
	}
	
	printf("Digit:        0  1  2  3  4  5  6  7  8  9\n");
	printf("Occurrences:  ");
	for (int i = 0; i < 10; i++)
		printf("%d  ", digit_seen[i]);
	printf("\n");

	return 0;

}
