#include <stdio.h>

int main(void)
{
    int mm1, dd1, yy1, mm2 = 12, dd2 = 31, yy2 = 99;

    for (;;)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d / %d / %d", &mm1, &dd1, &yy1);

        if (mm1 == 0 && dd1 == 0 && yy1 == 0)
        {
            break;
        }

        if (yy2 < yy1)
        {
            continue;
        }
        else if (yy2 == yy1 && mm2 < mm1)
        {
            continue;
        }
        else if (yy2 == yy1 && mm2 == mm1 && dd2 < dd1)
        {
            continue;
        }
        else
        {
            yy2 = yy1;
            mm2 = mm1;
            dd2 = dd1;
        }
    }
    
    printf("%d/%d/%.2d is the earliest date\n", mm2, dd2, yy2);

    return 0;
}