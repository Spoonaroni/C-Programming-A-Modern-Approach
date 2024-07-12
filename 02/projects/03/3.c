#include <stdio.h>

int main(void)
{
    int r;

    printf("Enter a radius: ");
    scanf("%i", &r);

    int r_cubed = r * r * r;
    float pi = 3.1415926;
    float frac = 4.0f/3.0f;
    float v = frac * pi * r_cubed;

    printf("%f\n", v);    
}