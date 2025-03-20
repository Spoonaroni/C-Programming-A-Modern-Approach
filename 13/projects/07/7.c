#include <stdio.h>
#include <string.h>

int main(void)
{
	char *tens_array[] = {"twenty", "thirty", "fourty", "fifty",
						  "sixty", "seventy", "eighty", "ninety"};
	char *teens_array[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
						   "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *ones_array[] = {"-one", "-two", "-three", "-four", "-five",
						  "-six", "-seven", "-eight", "-nine"};
	int tens, ones;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &tens, &ones);

	printf("You entered the number ");
	if (tens == 1) {
		printf("%s\n", teens_array[ones]);
	} else {
		if (ones == 0) {
			printf("%s\n", tens_array[tens-2]);
		} else {
			printf("%s%s\n", tens_array[tens-2], ones_array[ones-1]);
		}
	}

	return 0;
}
