#include <stdio.h>

int main(void)
{
    int n; 
    float e = 1.0f;

    printf("Enter value for n: ");
    scanf("%d", &n);

    for (int i = 1, m = 1; i <= n; i++)
    {
        e += 1.0f / (m *= i);
    }
    
    printf("e is approximately: %f\n", e);

    return 0;
}