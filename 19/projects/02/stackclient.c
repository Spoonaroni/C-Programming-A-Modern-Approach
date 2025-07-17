#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	Stack s = create();
	char ch, operandOne, operandTwo;

	while (true) {
		make_empty(s);
		printf("Enter an RPN expression: ");

		while (true) {
			scanf(" %c", &ch);
			if (isdigit(ch))
				push(s, ch - '0');
			else {
				switch(ch) {
					case '+':
						operandTwo = pop(s);
						operandOne = pop(s);
						push(s, operandOne + operandTwo);
						break;
					case '-':
						operandTwo = pop(s);
						operandOne = pop(s);
						push(s, operandOne - operandTwo);
						break;
					case '*':
						operandTwo = pop(s);
						operandOne = pop(s);
						push(s, operandOne * operandTwo);
						break;
					case '/':
						operandTwo = pop(s);
						operandOne = pop(s);
						if (operandTwo == 0) {
							printf("Division by zero\n");
							exit(EXIT_FAILURE);
						}
						push(s, operandOne / operandTwo);
						break;
					case '=':
						printf("Value of expression: %d\n", pop(s));
						break;
					default: return 0;
				}
			}

			if (ch == '=') {
				break;
			}
		}
	}
	return 0;
}
