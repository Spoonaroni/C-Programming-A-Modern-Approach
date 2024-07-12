#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%f\n", value);

    return 0;
}