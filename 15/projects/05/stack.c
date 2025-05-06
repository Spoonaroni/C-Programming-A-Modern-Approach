#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

// defines
#define MAX 100

// external variables
int stack[MAX];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == MAX;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		stack[top++] = i;
}

int pop(void)
{
	if (is_empty()) {
		stack_underflow();
		return 1; // Stops error from popping up, but is otherwise useless
	}
	else
		return stack[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(EXIT_FAILURE);
}
