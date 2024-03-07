#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * @s: initial segment
 * @accept: segment to pull from
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int c = 0;
	const char *pp;


	while (*s)
	{
		i = 0;
		pp = accept;

		while (*pp)
		{
			if (*pp == *s)
			{
				i = 1;
				break;
			}
		}
		pp++;
		if (!i)
			break;
		c++;
		s++;
		}
		return (c);
		}
