#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

Queue queue_create(void);
void queue_insert(Queue q, Item i);
Item queue_remove_beginning(Queue q);
Item queue_return_first(Queue q);
Item queue_return_last(Queue q);
bool queue_is_empty(Queue q);

#endif
