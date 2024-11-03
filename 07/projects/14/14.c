#include <math.h>
#include <stdio.h>

int main(void)
{
	int x;
	double y = 1.0, xy, avg = 1.0;

	printf("Enter a positive number: ");
	scanf("%d", &x);

	do
	{
		y = avg;
		xy = x / y;
		avg = (y + xy) / 2;
	}
	while (fabs(avg - y) > (0.00001 * avg));
		
	printf("Square root: %.5lf\n", avg);

	return 0;
}
