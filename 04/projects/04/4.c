#include <stdio.h>

int main(void)
{
    int dec, o1, o2, o3, o4, o5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &dec);
    
    printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);

    return 0;
}