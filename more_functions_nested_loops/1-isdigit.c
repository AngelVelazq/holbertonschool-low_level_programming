#include "main.h"

/**
 * _isdigit - check for a digit from 0 - 9
 * @c: The character to be checked
 * Return: 1 if c is a digit and 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
