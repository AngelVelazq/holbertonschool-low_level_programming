#include "main.h"
/**
 * print_line - Write a function that draws a straight line
 * @n: Number of characters to print in the line
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
