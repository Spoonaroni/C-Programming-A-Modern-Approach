/* Checks numbers for repeated digits */

#include <stdbool.h>      /* C99 only */
#include <stdio.h>

int main(void) {

    bool digit_seen[10] = {false}, 
         repeated[10] = {false};
    int digit, d = 0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
	{
        digit = n % 10;
        if (digit_seen[digit])
		{
            repeated[digit] = true;
			d++;
		}
        digit_seen[digit] = true;
        n /= 10;
    }

	if (d > 0)
	{
		printf("Repeated digit(s): ");
		for (int i = 0; i < 10; i++)
			{
		        if (repeated[i])
		            printf("%d ", i);
		    }
	}
	else
		printf("No digits repeated");

    printf("\n");

    return 0;
}
