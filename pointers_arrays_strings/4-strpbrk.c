#include "main.h"
/**
 * _strpbrk - function to locate string
 * @s: first string
 * @accept: pointer to match
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	const char *p;
	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return ('\0');
}
