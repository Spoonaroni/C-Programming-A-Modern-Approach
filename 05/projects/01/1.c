#include <stdio.h>

int main(void)
{
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input >= 0 && input <= 9)
    {
        printf("The number %d has 1 digit\n", input);
    } 
    else if (input >= 10 && input <= 99)
    {
        printf("The number %d has 2 digits\n", input);
    }
    else if (input >= 100 && input <= 999)
    {
        printf("The number %d has 3 digits\n", input);
    }
    else if (input >= 1000 && input <= 9999)
    {
        printf("The number %d has 4 digits\n", input);
    }
    else
    {
        printf("The number has more than 4 digits\n");
    }
    
    return 0;
}