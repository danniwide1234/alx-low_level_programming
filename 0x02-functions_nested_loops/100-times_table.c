#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which the times table should be printed.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	for (int q = 0; q <= n; q++)
	{
		for (int r = 0; r <= n; r++)
		{
			int result = q * r;
			int spaces;

			if (r > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 100)
			{
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
				else
				{
					spaces = result / 10;
					_putchar(spaces + '0');
				}
			}

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
