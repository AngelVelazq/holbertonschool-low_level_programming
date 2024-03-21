#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - set parameter
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
			i++;
	}
}
