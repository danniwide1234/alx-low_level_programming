#include "main.h"

/**
 * print_diagonal - Diagonal drawing
 * @n: number of time the characters is expected to be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, p;

		for (k = 0; k < n; k++)
		{
			for (p = 0; p < k; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
