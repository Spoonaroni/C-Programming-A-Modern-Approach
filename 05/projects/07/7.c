#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, lar, sma, lar2, sma2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        lar = n1;
        sma = n2;
    }
    else 
    {
        lar = n2;
        sma = n1;
    }

    if (n3 >= n4)
    {
        lar2 = n3;
        sma2 = n4;
    }
    else
    {
        lar2 = n4;
        sma2 = n3;
    }

    if (lar > lar2)
    {
        printf("Largest: %d\n", lar);
    }
    else
    {
        printf("Largest: %d\n", lar2);
    }

    if (sma < sma2)
    {
        printf("Smallest: %d\n", sma);
    }
    else
    {
        printf("Smallest: %d\n", sma2);
    }


    
    return 0;
}