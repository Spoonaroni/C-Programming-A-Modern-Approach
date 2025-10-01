#include <stdio.h>
#include <stdlib.h>

#include "readline.h"

#define MAX_LEN 25
#define MAX_FLIGHTS 100

int main(int argc, char *argv[])
{
	FILE *fp;
	char str[MAX_LEN+1];
    int i = 0, size, input_time, input_hour, input_min, arr_hour, arr_min, dep_hour, dep_min,
		d[MAX_FLIGHTS],
		a[MAX_FLIGHTS];

	if (argc != 2) {
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error: %s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_line(str, MAX_LEN, fp)) {
		sscanf(str, "%d:%d %d:%d", &dep_hour, &dep_min, &arr_hour, &arr_min);
		d[i] = (dep_hour * 60) + dep_min;
		a[i] = (arr_hour * 60) + arr_min;
		i++;
		if (i == MAX_FLIGHTS) {
			fprintf(stderr, "Error: Too many flights, stopping now\n");
			break;
		}
	}
	size = i;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &input_hour, &input_min);
    input_time = (input_hour * 60) + input_min;

    printf("Closest departure time is ");

	for (i = 0; i < size; i++) {
		if (input_time <= d[i] + (d[i+1] - d[i]) / 2) {
			break;
		}
	}

	printf("%02d:%02d, arriving at %02d:%02d\n", 
			d[i] / 60, d[i] % 60,
			a[i] / 60, a[i] % 60);

	fclose(fp);
	exit(EXIT_SUCCESS);
}
