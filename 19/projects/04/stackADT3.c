#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

struct node {
    void *data;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error, malloc failed in create()\n");
    s->top = NULL;
    return s;
}

void destroy(Stack s)
{
    make_empty(s);
    free(s);
}

void make_empty(Stack s)
{
    while (!is_empty(s))
        pop(s);
}

bool is_empty(const Stack s)
{
    return s->top == NULL;
}

bool is_full(const Stack s)
{
    return false;
}

void push(Stack s, void *i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in push: stack is full.");

    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

void *pop(Stack s)
{
	struct node *old_top;
	void *i;

    if (is_empty(s))
        terminate("Error in pop: stack is empty.");

    i = s->top->data;
    old_top = s->top;
    s->top = s->top->next;
    free(old_top);
    return i;
}


