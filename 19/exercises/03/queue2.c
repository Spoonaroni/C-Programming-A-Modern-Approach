#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {
	Item value;
	struct node *next;
};

struct queue_type {
	struct node *first;
	struct node *last;
};

Queue queue_create(void)
{
	Queue new_queue = malloc(sizeof(struct queue_type));
	if (new_queue == NULL) {
		printf("Error: Malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_queue->first = NULL;
	new_queue->last = NULL;
	return new_queue;
}

void queue_insert(Queue q, Item i)
{
	struct node *new_node = malloc(sizeof(struct queue_type));
	if (new_node == NULL) {
		printf("Error: Malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
	new_node->value = i;
	new_node->next = q->first;

	if (q->first == NULL)
		q->first = q->last = new_node;
	else {
		q->last->next = new_node;
		q->last = q->last->next;
	}
}

Item queue_remove_beginning(Queue q)
{
	Item i;

	if (!queue_is_empty(q)) {
		struct node *temp_node = q->first;
		i = q->first->value;
		q->first = q->first->next;
		free(temp_node);
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}

	return i;
}

Item queue_return_first(Queue q)
{
	if (!queue_is_empty(q)) {
		return q->first->value;
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}
}

Item queue_return_last(Queue q)
{
	if (!queue_is_empty(q)) {
		return q->last->value;
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}
}

bool queue_is_empty(Queue q)
{
	return q->first == NULL;
}
