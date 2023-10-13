#include "main.h"

/**
 * print_number - prints integer numbers
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int xl;

	if (n < 0)
	{
		xl = -n;
		_putchar('_');
	}
	else
	{
		xl = n;
	}
	if (xl / 10)
	{
		print_number(xl / 10);
	}
	_putchar((xl % 10) + '0');
}
