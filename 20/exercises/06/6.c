#include <stdio.h>

unsigned short swap_bytes(unsigned short i)
{
	// Part (a)
	unsigned short high_byte = i & 0x00FF;
	unsigned short low_byte = i & 0xFF00;

	high_byte <<= 8;
	low_byte >>= 8;

	return high_byte | low_byte;

	/* Part (b)
	 * return (i >> 8) | (i << 8);
	*/
}

int main(void)
{
	unsigned short us;

	printf("Enter a hexadecimal number (up to four digits): ");
	scanf("%hx", &us);

	printf("Number with bytes swapped: %hx\n", swap_bytes(us));

	return 0;
}
