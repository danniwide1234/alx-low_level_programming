#include "main.h"

/**
 * times_table - prints the 9 times table, beginning with 0.
 */
void times_table(void)
{
	int k;
	int m;
	int n;
	int o;
	int p;

	for (k = 0; k <= 9; k++)
	{
	for (m = 0; m <= 9; m++)
	{
	n = k * m;
	if (n > 9)
	{
	o = n % 10;
	p = (n - o) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(p + '0');
	_putchar(o + '0');
	}
	else
	{
	if (m != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(n + '0');
	}
	}
	_putchar('\n');
	}
}
