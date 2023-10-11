#include "main.h"

/**
 * times_table - prints the 9 times table, beginning with 0.
 */
void times_table(void)
{
	int k = 0;
	int m;
	int product;

	while (k <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			product = k * m;

			if (m > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10)
				_putchar(' ');
			else
				_putchar(product / 10 + '0');

			_putchar(product % 10 + '0');
			m++;
		}
		_putchar('\n');
		k++;
	}
}
