#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: count of all arguments passed to the function
 * @...: number that can be varied passed as arguments
 *
 * Return: return sum but 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list at;
	unsigned int k, sum = 0;

	va_start(at, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(at, int);
	}
	va_end(at);
	return (sum);
}
