#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last = abs(n % 10);
	{
	_putchar (last + '0');
	}
	return (last);
}
