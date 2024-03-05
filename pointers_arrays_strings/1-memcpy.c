#include "main.h"
/**
 * _memcpy - copy memory area from one area to another
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: pointer to the destination memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
