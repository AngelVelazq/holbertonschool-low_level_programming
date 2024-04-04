#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (head == NULL || str == NULL)
		return (NULL);
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Calculate the length of the string */
	new_node->len = 0;
	while (str[new_node->len])
		new_node->len++;
	/* Set the next pointer of the new node to NULL since is the last node */
	new_node->next = NULL;
	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Find the last node */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* Attach the new node after the last node */
	last_node->next = new_node;
	return (new_node);
}
