#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *Return: void
 */
void print_alphabet_x10(void)
{
	char letters;
	int i = 0;

	while (i <= 9)
	{
	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
	_putchar(letters);
	}
	_putchar ('\n');
	i++;
	}
}
