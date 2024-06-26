#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer value to be added to the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *head;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, new node becomes head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* Link new node to the last node */
	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
