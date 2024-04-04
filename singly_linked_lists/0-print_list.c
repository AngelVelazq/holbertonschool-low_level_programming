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
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
