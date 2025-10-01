#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	char *months[] = { "January", "February", "March", "April",
						"May", "June", "July", "August",
						"September", "October", "November", "December" };
	int month, day, year;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s date\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (sscanf(argv[1], "%d/%d/%d", &month, &day, &year) == 3)
		printf("%s %d, %4d\n", months[month-1], day, year);
	else if (sscanf(argv[1], "%d-%d-%d", &month, &day, &year) == 3)
		printf("%s %d, %d\n", months[month-1], day, year);
	else {
		fprintf(stderr, "Error: Date not in proper format\n");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
