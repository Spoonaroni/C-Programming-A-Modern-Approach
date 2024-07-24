#include <stdio.h>

int main(void)
{
    int area, three, four;

    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &three, &four);

    printf("You entered %d.%d.%d\n", area, three, four);
    
    return 0;
}