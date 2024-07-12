#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    
    float x2 = x * x;
    float x3 = x * x * x;
    float x4 = x * x * x * x;
    float x5 = x * x * x * x * x;

    float value = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;

    printf("%f\n", value);

    return 0;
}