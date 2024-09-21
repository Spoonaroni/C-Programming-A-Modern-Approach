#include <stdio.h>

int main(void)
{
    int n, m = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; m <= n; i++)
    {
        m = i * i;
        if (m % 2 == 0)
        {
            printf("%d\n", m);
        }
    }
    
    return 0;
}