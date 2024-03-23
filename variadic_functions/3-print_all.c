#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	int found = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				found = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				found = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				found = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				found = 1;
				break;
		}
		if (format[i + 1] && found)
			printf(", ");
		i++;
		found = 0;
	}
	printf("\n");
	va_end(args);
}

