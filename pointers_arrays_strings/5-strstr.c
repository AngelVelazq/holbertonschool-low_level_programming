#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string w ocurrence
 * @needle: used to find first ocurrence in @haystack
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
