#include <stdio.h>

int main(void)
{
    int hour, min;
    char AP;

    printf("Enter a 24-hour itme: ");
    scanf("%2d : %2d", &hour, &min);

    if (hour > 12)
    {
        hour -= 12;
        AP = 'P';
    }
    else if (hour == 12)
    {
        AP = 'P'; 
    }
    else if (hour == 0)
    {
        hour = 12;
        AP = 'A';
    }
    else 
    {
        AP = 'A';
    }
    
    printf("Equivalent 12-hour time: %.2d:%.2d%1cM\n", hour, min, AP);

    return 0;
}