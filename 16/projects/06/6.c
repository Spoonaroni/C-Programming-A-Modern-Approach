#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
	struct date date1, date2;
	int i;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &date1.month, &date1.day, &date1.year);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &date2.month, &date2.day, &date2.year);

	i = compare_dates(date1, date2);
	if (i == -1)
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
	else if (i == 1)
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
	else
       printf("%d/%d/%.2d is equal to %d/%d/%.2d\n", date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);

    return 0;
}

int day_of_year(struct date d)
{
    int day = d.day;

    for (int i = d.month - 1; i > 0; i--) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day += 31;
                break;
            case 2:
                day += 28;
                break;
            case 4: case 6: case 9: case 11:
                day += 30;
                break;
            default:
                break;
        }
    }

    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0 && d.month > 2))
        day++;

    return day;
}

int compare_dates(struct date d1, struct date d2)
{
    int date1 = day_of_year(d1);
    int date2 = day_of_year(d2);

    if (d1.year < d2.year)
        return -1;
    else if (d1.year > d2.year)
        return 1;
    else {
        if (date1 < date2)
            return -1;
        else if (date1 > date2)
            return 1;
        else
            return 0;
    }
}

