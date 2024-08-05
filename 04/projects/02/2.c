#include <stdio.h>

int main(void)
{
    int n, first, sec, third;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    first = n % 10;
    sec = n % 100 / 10;
    third = n / 100;

    printf("The reversal is: %d%d%d\n", first, sec, third);
    
    return 0;
}   