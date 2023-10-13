#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: Number of time characters should be printed
 */

void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (t = 1; t <= n; t++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
