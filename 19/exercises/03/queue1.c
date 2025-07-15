#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_SIZE 100

struct queue_type {
	Item contents[QUEUE_SIZE];
	int head;
	int item_to_remove;
	int size;
};

Queue queue_create(void)
{
	Queue new_queue = malloc(sizeof(struct queue_type));
	if (new_queue == NULL) {
		printf("Malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_queue->head = 0;
	new_queue->item_to_remove = 0;
	new_queue->size = 0;
	return new_queue;
}

void queue_insert(Queue q, Item i)
{
	if (q->size < QUEUE_SIZE) {
		if (q->head < QUEUE_SIZE) {
			q->contents[q->head++] = i;
			q->size++;
		} else {
			q->head = 0;
			q->contents[q->head++] = i;
			q->size++;
		}
	} else {
		printf("Error: Queue is full\n");
		exit(EXIT_FAILURE);
	}
}

Item queue_remove_beginning(Queue q)
{
	Item i;

	if (!queue_is_empty(q)) {
		if (q->item_to_remove < QUEUE_SIZE) {
			i = q->contents[q->item_to_remove++];
			q->size--;
		} else {
			q->item_to_remove = 0;
			i = q->contents[q->item_to_remove++];
			q->size--;
		}
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}

	return i;
}

Item queue_return_first(Queue q)
{
	if (!queue_is_empty(q)) {
		if (q->item_to_remove < QUEUE_SIZE) 
			return q->contents[q->item_to_remove];
		else {
			q->item_to_remove = 0;
			return q->contents[q->item_to_remove];
		}
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}
}

Item queue_return_last(Queue q)
{
	if (!queue_is_empty(q)) {
		if (q->head < QUEUE_SIZE) 
			return q->contents[q->head];
		else {
			q->head = 0;
			return q->contents[q->head];
		}
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}
}

bool queue_is_empty(Queue q)
{
	return q->size == 0;
}
