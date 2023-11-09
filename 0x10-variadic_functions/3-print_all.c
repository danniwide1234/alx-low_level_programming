#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: a list of types for the variable arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int k = 0;
	char *separator = "";
	char *s = "";

	va_start(args, format);

	while (format && format[k])
	{
		switch (format[k])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);

				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				k++;
				continue;
		}

		separator = ", ";
		k++;
	}

	printf("\n");
	va_end(args);
}
