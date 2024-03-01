#include "main.h"
#include <stddef.h>
/*
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * This function takes a pointer to a string and calculates
 * the length of the string (excluding the null terminator).
 *
 * Return: The length of @str.
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
