#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line
 *
 * @separator: the string to be worked on
 * @n: number of string to be worked on
 * @...: variable to be passed as arguments that
 * could changed
 *
 * Descriptor: nil is printed if one of the strings is NUll
 * but if separator is NULL, it is not printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringW;
	char *s;
	unsigned int count;

	va_start(stringW, n);
	for (count = 0; count < n; count++)
	{
		s = va_arg(stringW, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
			if (count != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(stringW);
}
