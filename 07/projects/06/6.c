#include <stdio.h>

int main(void)
{
	printf("%d\n", (int) sizeof(int));
	printf("%hd\n", (short) sizeof(short));
	printf("%ld\n", (long) sizeof(long));
	printf("%f\n",  (float) sizeof(float));
	printf("%lf\n", (double) sizeof(double));
	printf("%Lf\n", (long double) sizeof(long double));

	return 0;
}
