#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// defines
#define MAX 100

// external variables
int stack[MAX];
int top = 0;

// prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int evaluate_RPN_expression(const char *expression);

int main(void)
{
	char ch, expression[MAX], *p = expression;

	while (true) {
		make_empty();
		printf("Enter an RPN expression: ");
		while ((ch = getchar()) != '\n' && p < expression + MAX) {
			*p++ = ch;
		}
		*p = '\0';
		
		printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
		p = expression;
	}
	return 0;
}

int evaluate_RPN_expression(const char *expression)
{
	char operandOne, operandTwo;

	while (*expression) {
		if (isdigit(*expression))
			push(*expression - '0');
		else {
			switch(*expression) {
				case '+':
					operandTwo = pop();
					operandOne = pop();
					push(operandOne + operandTwo);
					break;
				case '-':
					operandTwo = pop();
					operandOne = pop();
					push(operandOne - operandTwo);
					break;
				case '*':
					operandTwo = pop();
					operandOne = pop();
					push(operandOne * operandTwo);
					break;
				case '/':
					operandTwo = pop();
					operandOne = pop();
					if (operandTwo == 0) {
						printf("Division by zero\n");
						exit(EXIT_FAILURE);
					}
					push(operandOne / operandTwo);
					break;
				case '=':
					return pop();
					break;
				case ' ':
					break;
				default: exit(EXIT_FAILURE);
			}
		}
		expression++;
	}
	exit(EXIT_FAILURE);
}

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
