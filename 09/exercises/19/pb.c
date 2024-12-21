#include <stdio.h>

void pb(int n);

int main(void)
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    pb(i);

    printf("\n");

    return 0;
}

void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
