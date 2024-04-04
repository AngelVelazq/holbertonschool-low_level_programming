#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
