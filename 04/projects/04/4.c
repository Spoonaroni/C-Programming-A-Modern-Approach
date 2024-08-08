#include <stdio.h>

int main(void)
{
    int dec, o1, o2, o3, o4, o5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &dec);
    
    o1 = (dec / 4096) % 8;
    o2 = (dec / 512) % 8;
    o3 = (dec / 64) % 8;
    o4 = (dec / 8) % 8;
    o5 = dec % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);

    return 0;
}