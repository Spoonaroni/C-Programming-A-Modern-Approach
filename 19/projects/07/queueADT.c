#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define PUBLIC
#define PRIVATE static

struct node {
	Item data;
	struct node *next;
};

struct queue_type {
	struct node *head; // oldest
	struct node *tail; // newest
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

	new_queue->head = NULL;
	new_queue->tail = NULL;
	new_queue->len = 0;
	return new_queue;
}

PUBLIC void queue_destroy(Queue q)
{
	while (!queue_is_empty(q))
		queue_remove_beginning(q);
	free(q);
}

PUBLIC void queue_insert(Queue q, Item i)
{
	struct node *new_node = malloc(sizeof(struct queue_type));
	if (new_node == NULL)
		terminate("Error in queue_insert: malloc failed.");
	
	new_node->data = i;
	new_node->next = q->head;

	if (q->head == NULL)
		q->head = q->tail = new_node;
	else {
		q->tail->next = new_node;
		q->tail = q->tail->next;
		q->tail->next = NULL;
	}
}

PUBLIC Item queue_remove_beginning(Queue q)
{
	Item i;

	if (!queue_is_empty(q)) {
		struct node *temp_node = q->head;
		i = q->head->data;
		q->head = q->head->next;
		free(temp_node);
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}

	return i;
}

PUBLIC Item queue_return_head(Queue q)
{
	if (!queue_is_empty(q)) {
		return q->head->data;
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}
}

PUBLIC Item queue_return_last(Queue q)
{
	
if (!queue_is_empty(q)) {
		return q->tail->data;
	} else {
		printf("Error: Queue is empty\n");
		exit(EXIT_FAILURE);
	}
}

PUBLIC bool queue_is_empty(Queue q)
{
	return q->head == NULL;
}

PUBLIC bool queue_is_full(Queue q)
{
	return false; // linked list will never be full
}
