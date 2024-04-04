#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list - Single linked lists
 * @str: String for malloc
 * @len: Length of the string
 * @next: Singly linked lists node struct
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

