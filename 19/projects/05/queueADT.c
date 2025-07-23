#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define PUBLIC
#define PRIVATE static
#define MAX 100

struct queue_type {
	Item items[MAX];
	int head; // oldest
	int tail; // newest
	int len; // amount of items
};

PRIVATE void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC Queue queue_create(void)
{
	Queue new_queue = malloc(sizeof(struct queue_type));
	if (new_queue == NULL)
		terminate("Error in queue_create: malloc failed.");

	new_queue->head = 0;
	new_queue->tail = 0;
	new_queue->len = 0;
	return new_queue;
}

PUBLIC void queue_destroy(Queue q)
{
	free(q);
}

PUBLIC void queue_insert(Queue q, Item i)
{
	if (q->len != MAX) {
		if (q->tail < MAX) {
			q->items[q->tail++] = i;
			q->len++;
		} else {
			q->tail = 0;
			q->items[q->tail++] = i;
			q->len++;
		}
	} else
		terminate("Error in queue_insert: queue is full.");
}

PUBLIC Item queue_remove_beginning(Queue q)
{
	Item i;

	if (!queue_is_empty(q)) {
		if (q->head < MAX) {
			i = q->items[q->head++];
			q->len--;
		} else {
			q->head = 0;
			i = q->items[q->head++];
			q->len--;
		}
	} else
		terminate("Error in queue_remove_beginning: queue is empty.");

	return i;
}

PUBLIC Item queue_return_first(Queue q)
{
	Item i;

	if (!queue_is_empty(q)) {
		if (q->head < MAX) {
			i = q->items[q->head];
		} else {
			q->head = 0;
			i = q->items[q->head];
		}
	} else
		terminate("Error in queue_return_first: queue is empty.");

	return i;
}

PUBLIC Item queue_return_last(Queue q)
{
	Item i;

	if (!queue_is_empty(q)) {
		if (q->tail < MAX) {
			i = q->items[q->tail];
		} else {
			q->tail = 0;
			i = q->items[q->tail];
		}
	} else
		terminate("Error in queue_return_last: queue is empty.");

	return i;
}

PUBLIC bool queue_is_empty(Queue q)
{
	return q->len == 0;
}

PUBLIC bool queue_is_full(Queue q)
{
	return q->len == MAX;
}
