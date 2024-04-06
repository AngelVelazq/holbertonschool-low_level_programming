#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to get, starting from 0.
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift the number to the right by index bits */
	n >>= index;

	/* Return the least significant bit */
	return (n & 1);
}
