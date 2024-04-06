#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1'); /* Print 1 if the bit is set */
			flag = 1;
		}
		else if (flag) /* If flag is true, print 0 for trailing zeros */
		{
			_putchar('0');
		}
		/* Shift the mask to the right */
		mask >>= 1;
	}
	if (!flag)
		_putchar('0');
}
