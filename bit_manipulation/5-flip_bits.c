#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one
 *             number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_check = n ^ m;
	unsigned int count = 0;

	while (bit_check)
	{
		count += bit_check & 1;
		bit_check >>= 1;
	}
	return (count);
}
