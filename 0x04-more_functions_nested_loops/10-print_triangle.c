#include "main.h"

/**
 * print_triangle - print a triangle then a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c, f;

		for (c = 1; c <= size; c++)
		{
			for (f = 1; f <= size - c; f++)
			{
				_putchar(' ');
			}
			for (f = 1; f <= c; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
