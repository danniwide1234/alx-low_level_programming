#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: integers
 *
 * Return: (void)
 */

void print_number(int n)
{
	unsigned int fp;

	fp = n;
	if (n < 0)
	{
		_putchar('-');
		fp = -n;
	}
	if (fp / 10 != 0)
	{
		print_number(fp / 10);
	}
	_putchar((fp % 10) + '0');
}
