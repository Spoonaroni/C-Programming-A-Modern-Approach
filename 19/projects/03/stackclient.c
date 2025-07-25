#include <stdio.h>
#include "stack.h"

int main(void)
{
	Stack s1 = create(),
		s2 = create();
	int n;

	push(s1, 1);
	printf("Length of s1: %d\n", length(s1));
	push(s1, 2);
	printf("Length of s1: %d\n", length(s1));

	n = pop(s1);
	printf("Popped %d from s1\n", n);
	printf("Length of s1: %d\n", length(s1));
	push(s2, n);
	printf("Length of s2: %d\n", length(s2));
	n = pop(s1);
	printf("Popped %d from s1\n",  n);
	printf("Length of s1: %d\n", length(s1));
	push(s2, n);
	printf("Length of s2: %d\n", length(s2));

	destroy(s1);

	while (!is_empty(s2)) {
		printf("Popped %d from s2\n", pop(s2));
		printf("Length of s2: %d\n", length(s2));
	}

	push(s2, 3);
	printf("Length of s2: %d\n", length(s2));
	make_empty(s2);
	printf("Length of s2: %d\n", length(s2));
	if (is_empty(s2))
		printf("s2 is empty\n");
	else
		printf("s2 is not empty\n");

	destroy(s2);

	return 0;
}
