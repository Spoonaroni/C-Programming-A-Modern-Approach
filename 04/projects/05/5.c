#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
    
    total = ((n1 + n3 + n5 + n7 + n9 + n11) * 3) + (n2 + n4 + n6 + n8 + n10);

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}