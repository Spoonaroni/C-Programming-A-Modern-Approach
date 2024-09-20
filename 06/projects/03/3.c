#include <stdio.h>

int main(void)
{
    int num, den, n, m, r;

    printf("Enter a fraction: ");
    scanf("%d / %d", &num, &den);

    m = num;
    n = den;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    num /= m;
    den /= m;

    printf("In lowest terms: %d/%d\n", num, den);
    
    return 0;
}