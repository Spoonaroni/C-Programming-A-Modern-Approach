#include <stdio.h>

int main(void)
{
    float big = 0.0f, temp;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &temp);

        if (temp > big)
        {
            big = temp;
        }
    }
    while (temp > 0);

    printf("\nThe largest number entered was %.2f\n", big);
    
    return 0;
}