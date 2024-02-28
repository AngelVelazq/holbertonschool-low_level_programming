#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line
 * @n: number of characters to be printed
 */
void print_diagonal(int n)
{
	int space, rows;

	if (n > 0)
	{
		for (rows = 1; rows <= n; rows++)
		{
			for (space = 0; space < rows; space++)
			{
				if (space != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
