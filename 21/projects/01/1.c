#include <stddef.h>
#include <stdio.h>

struct s {
	char a;
	int b[2];
	float c;
}s1;

int main(void)
{
	printf("Size of struct s: %lu\n", sizeof(struct s));

	printf("\nSize of a: %lu\n", sizeof(s1.a));
	printf("Offset of a: %lu\n", offsetof(struct s, a));

	printf("\nSize of b: %lu\n", sizeof(s1.b));
	printf("Offset of b: %lu\n", offsetof(struct s, b));

	printf("\nSize of c: %lu\n", sizeof(s1.c));
	printf("Offset of c: %lu\n", offsetof(struct s, c));

	return 0;
}
