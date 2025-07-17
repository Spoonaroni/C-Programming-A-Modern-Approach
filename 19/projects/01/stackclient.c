#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

int main(void) {

    Stack s = create();
	char c;

    printf("Enter parentheses and/or braces: ");
    
    while ((c = getchar()) != '\n') {
		if (c == '}' && pop(s) != '{') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        } else if (c == ')' && pop(s) != '(') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        } else if (c == ']' && pop(s) != '[') {
			printf("Parentheses/braces are not nested properly\n");
			return 0;
		} else if (c == '(' || c == '{' || c == '[')
            push(s, c);
    }

    if (!is_empty(s)) {
        printf("Parentheses/braces are not nested properly\n");
        return 0;
    }

    printf("Parentheses/braces are nested properly\n");

	destroy(s);
    return 0;
}
