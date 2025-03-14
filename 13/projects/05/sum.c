#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 3) {
		printf("Too few arguments\n");
		return 1;
	}

	for (int i = 0; i < argc; i++) {
		sum += atoi(argv[i]);
	}

	printf("Total: %d\n", sum);

	return 0;
}
