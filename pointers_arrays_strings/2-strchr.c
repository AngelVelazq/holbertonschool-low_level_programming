#include "main.h"
/**
 * _strchr - locate a char in a string
 * @s: search this string
 * @c: the location
 * Return: null
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s); }
	while (*s++);
	return ('\0');
}
