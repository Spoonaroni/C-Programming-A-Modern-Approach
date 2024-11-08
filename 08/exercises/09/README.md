## Exercise 8.09

Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).

## Solution

```c
int temperature-readings[30][24];
float avg = 0;

for (int i = 0; i < 30; i++)
{
    for (int j = 0; j < 24; j++)
    {
        avg += temperature-readings[i][j];
        avg /= 24;
    }
}
avg /= 30;
```
