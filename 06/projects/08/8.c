#include <stdio.h>

int main(void)
{
    int n, d;

    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &d);

    for (int i = 1; i < d; i++)
    {
        printf("   ");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%2d ", i);
        if ((i + (d - 1)) % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}