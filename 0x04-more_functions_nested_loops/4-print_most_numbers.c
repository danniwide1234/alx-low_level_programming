#include "main.h"

/**
 * print_most_numbers - print numb between 0 & 9 except 2 and 4
 *
 * Return : (void)
 */

void print_most_numbers(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		if (!(m == '2' || m == '4'))
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
