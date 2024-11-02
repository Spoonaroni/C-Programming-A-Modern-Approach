#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int hour, min;
	char c;

	printf("Enter a 12-hour time: ");
	scanf("%d : %d %c", &hour, &min, &c);

	if (hour == 12)
		hour = 0;
	if (toupper(c) == 'P')
		hour += 12;

	printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, min);

	return 0;
}
