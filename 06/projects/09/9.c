#include <stdio.h>

int main(void)
{
    float loan, interest, payment;
    int n;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        loan = loan + (interest / 100  / 12 * loan) - payment;
        printf("Balance remaining after %d payments: %.2f\n", i, loan);
    }
    
    return 0;
}