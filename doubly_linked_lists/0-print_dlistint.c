#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - Print all the elements in a list
 * @h: Pointer to head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
