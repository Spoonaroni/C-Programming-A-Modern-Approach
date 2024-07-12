#include <stdio.h>

int main(void)
{
    const float tax = 0.05; 
    float amount;
    float plusTax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    plusTax = amount + amount * tax;

    printf("With tax added:  %.2f\n", plusTax);
}