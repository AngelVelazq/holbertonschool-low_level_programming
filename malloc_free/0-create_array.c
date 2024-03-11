#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: input
 * @c: input
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
