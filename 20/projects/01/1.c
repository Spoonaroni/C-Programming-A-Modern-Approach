#include <stdio.h>

union float_union {
	float f;
	struct float_struct {
		unsigned int frac: 23, expo: 8, sign: 1;
	} float_s;
} my_float;

int main(void)
{
	my_float.float_s.sign = 1;
	my_float.float_s.expo = 128;
	my_float.float_s.frac = 0;

	printf("%.1f\n", my_float.f);

	return 0;
}
