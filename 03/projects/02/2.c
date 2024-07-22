#include <stdio.h>

int main(void)
{
    int itemNum, m, d, y;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNum);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%8.2f\t%-2d/%-2d/%-4d\n", itemNum, unitPrice, m, d, y);

    return 0;
}