#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: input
 * @max: input
 * Return: void
 */
int *array_range(int min, int max)
{
	int *a;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
