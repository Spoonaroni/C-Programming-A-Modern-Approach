#include <stdio.h>

int main(void)
{
	int month, day, year;
	char listOfMonths[12][9] = {"January", "February", "March", "April",
								"May", "June", "July", "August",
								"September", "October", "November", "December"};

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &month, &day, &year);

	printf("You entered the date %s %d, %d\n", listOfMonths[month-1], day, year);

	return 0;
}
