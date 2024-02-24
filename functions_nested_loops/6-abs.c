#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_ abs - Compute absolute value of an integer
 * @i: The number to be computed
 * Return: Absolute value of number
 */
int _abs(int i)
{
	if (i < 0)
	{
	int _abs;

	_abs = i * -1;
	return (_abs);
	}
	return (i);
}
