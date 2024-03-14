#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory for an array
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		perror("malloc failed");
		exit(98);
	}
	return (ptr);
}
