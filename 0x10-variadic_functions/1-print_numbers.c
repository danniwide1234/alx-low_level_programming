#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be worked upon
 * @n: number of integers to be worked on
 * @...: variable to be passed as argument that could varied
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sel;
	unsigned int count;

	va_start(sel, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(sel, int));

		if (count != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sel);
}
