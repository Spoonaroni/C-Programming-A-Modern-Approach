#include <stdio.h>

int main(void)
{
    int value;

    printf("Enter a dollar amount: ");
    scanf("%i", &value);

    printf("$20 bills: %d\n", value/20);
    value -= 20 * (value/20);

    printf("$10 bills: %d\n", value/10);
    value -= 10 * (value/10);

    printf("$5 bills: %d\n", value/5);
    value -= 5 * (value/5);

    printf("$1 bills: %d\n", value);

    return 0;
}