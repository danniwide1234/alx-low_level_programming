#include "main.h"

/**
 * print_comma_and_space - Prints a comma and a space.
 */
void print_comma_and_space(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_double_space - Prints two spaces.
 */
void print_double_space(void)
{
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which the times table should be printed.
 */

void print_times_table(int n)
{
	int q, r, result;

	if (n > 15 || n < 0)
		return;

	for (q = 0; q <= n; q++)
	{
		for (r = 0; r <= n; r++)
		{
			result = q * r;

			if (r == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				print_comma_and_space();
				if (result < 10)
				{
					print_double_space();
					_putchar(result + '0');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
