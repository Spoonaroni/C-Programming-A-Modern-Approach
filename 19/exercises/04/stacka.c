#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack_type {
    Item contents[STACK_SIZE];
    int top;
};

static void terminate(char *message)
{
    printf("%s", message);
    exit(EXIT_FAILURE);
}

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error: malloc failed\n");
    s->top = 0;

    return s;
}

void destroy(Stack s)
{
    free(s);
}

void make_empty(Stack s)
{
    s->top = 0;
}

bool is_empty(const Stack s)
{
    return s->top == 0;
}

bool is_full(const Stack s)
{
    return s->top == STACK_SIZE - 1;
}

void push(Stack s, Item i)
{
    if (is_full(s))
        terminate("Error: stack overflow\n");
    s->contents[s->top++] = i;
}

Item pop(Stack s)
{
    if (is_empty(s))
        terminate("Error: stack underflow.");

    return s->contents[--s->top];
}
