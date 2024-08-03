#include <stdio.h>

int main(void)
{
    int n, first, sec;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    first = n % 10;
    sec = n / 10;

    printf("The reversal is: %d%d\n", first, sec);
    
    return 0;
}   