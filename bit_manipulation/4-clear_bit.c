#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit needs to be cleared.
 * @index: The index of the bit to clear, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Use bitwise AND with a complement of the bitmask at the index */
	*n &= ~(1 << index);

	return (1);
}
