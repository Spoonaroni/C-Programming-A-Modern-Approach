#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int value, twenties = 0, tens = 0, fives = 0, ones = 0;

	printf("Enter a dollar amount: ");
    scanf("%i", &value);

	pay_amount(value, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
	dollars -= 20 * (dollars / 20);

    *tens = dollars / 10;
	dollars -= 10 * (dollars / 10);

    *fives = 5 * (dollars/5);
	dollars -= 5 * (dollars / 5);
	
	*ones = dollars;
}
