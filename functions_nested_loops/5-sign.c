#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n - Number to be checked
 * Return: 1 for positive num, -1 for negative num or 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
}
