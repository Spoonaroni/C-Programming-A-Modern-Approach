#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

void queue_insert(Item i);
Item queue_remove_beginning(Queue q);
Item queue_return_first(Queue q);
Item queue_return_last(Queue q);
bool queue_is_empty(Queue q);

#endif
