# Exercise 16.05

Write the following functions, assuming that the `date` structure contains three
members: `month`, `day`, and `year` (all of type `int`).

(a) `int day_of_year(struct date d);`

Returns the day of the year (an integer between 1 and 366) that corresponde to
the date `d`.

(b) `int compare_dates(struct date d1, struct date d2);`

Returns -1 if `d1` is an earlier date than `d2`, +1 if `d1` is a later date than
`d2`, and 0 if `d1` and `d2` are the same.

## Solution

(a)

```c
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

    if (d.year % 4 == 0 && d.year % 100 != 0 || d.year % 400 == 0 && d.month > 2)
        day++;

    return day;
}
```

(b)

```c
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
```
