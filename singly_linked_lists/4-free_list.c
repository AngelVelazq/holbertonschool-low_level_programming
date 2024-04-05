#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list in @list_t
 * @head: pointer to the beginning of node
 * Return: freed list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
