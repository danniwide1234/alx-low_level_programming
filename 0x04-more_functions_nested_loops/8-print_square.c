#include "main.h"

/**
 * print_square - print a square, then new line
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;
		int v;

		for (t = 0; t < size; t++)
		{
			for (v = 0; v < size; v++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
