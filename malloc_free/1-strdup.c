#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer with a copy of the string
 * @str: input
 * Return: void
 */
char *_strdup(char *str)
{
	char *a;
	int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
		a[length] = str[length];

	return (a);
}
