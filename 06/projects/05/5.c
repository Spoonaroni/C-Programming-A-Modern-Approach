#include <stdio.h>

int main(void)
{
    int n, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversal is: ");
    do 
    {
        m = n % 10;
        n /= 10;

        printf("%d", m);
    }
    while (n > 0);
    
    printf("\n");

    return 0;
}