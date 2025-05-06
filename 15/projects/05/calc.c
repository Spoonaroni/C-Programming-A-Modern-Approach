#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	char ch, operandOne, operandTwo;

	while (true) {
		make_empty();
		printf("Enter an RPN expression: ");

		while (true) {
			scanf(" %c", &ch);
			if (isdigit(ch))
				push(ch - '0');
			else {
				switch(ch) {
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
						printf("Value of expression: %d\n", pop());
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
