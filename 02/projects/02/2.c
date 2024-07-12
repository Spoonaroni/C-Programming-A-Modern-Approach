#include <math.h>
#include <stdio.h>


int main(void)
{
    int r = 10;
    int r_cubed = r * r * r;
    float pi = 3.1415926;
    float frac = 4.0f/3.0f;
    float v = frac * pi * r_cubed;

    printf("%.1f\n", round(v));    
}