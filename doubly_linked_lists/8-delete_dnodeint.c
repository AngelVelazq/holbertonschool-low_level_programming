#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes the node at a @index of a list
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1); /*If the list is empty*/

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1); /*If the index is out of bounds*/

	if (current->next != NULL)
		current->next->prev = current->prev;

	current->prev->next = current->next;
	free(current);
	return (1);
}
