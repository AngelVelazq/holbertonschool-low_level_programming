#include "main.h"
/**
 * more_numbers - function that prints 0-14 (10 times)
 */
void more_numbers(void)
{
	int count = 0, num;

	for (count = 0; count < 10; count++)
	{
		num = 0;
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
