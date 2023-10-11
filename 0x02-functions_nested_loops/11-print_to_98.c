#include "main.h"


/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */


void print_to_98(int n)
{
	int step = (n <= 98) ? 1 : -1;
	int comma = 0;

	while (n != 99)
	{
		if (comma)
			_putchar(',');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');

		if (n == 98)
			_putchar('\n');

		n += step;
		comma = 1;
	}
}
