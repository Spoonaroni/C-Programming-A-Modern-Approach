#include <stdio.h>
#include "queueADT.h"

int main(void)
{
	Queue q1, q2;
	Item n;

	q1 = queue_create();
	q2 = queue_create();

	queue_insert(q1, 1);
	queue_insert(q1, 2);

	n = queue_remove_beginning(q1);
	printf("Removed %d from q1\n", n);
	queue_insert(q2, n);
	n = queue_remove_beginning(q1);
	printf("Removed %d from q1\n", n);
	queue_insert(q2, n);

	queue_destroy(q1);

	while (!queue_is_empty(q2))
		printf("Removed %d from q2\n", queue_remove_beginning(q2));

	queue_insert(q2, 3);
	printf("Removed %d from q2\n", queue_remove_beginning(q2));
	if (queue_is_empty(q2))
		printf("q2 is empty\n");
	else
		printf("q2 is not empty\n");

	queue_destroy(q2);

	return 0;
}
