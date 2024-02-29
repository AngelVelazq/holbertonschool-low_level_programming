#include "main.h"
/**
 * print_triangle - Write a function that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int rows, space;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (space = 0; space < size; space++)
			{
				if (space < size - (rows + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
