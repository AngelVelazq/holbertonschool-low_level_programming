#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
