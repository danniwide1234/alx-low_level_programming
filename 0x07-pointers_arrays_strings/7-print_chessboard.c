#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: array to be worked on
 *
 * Return: success
 */

void print_chessboard(char (*a)[8])
{
	int t;
	int u;

	t = 0;
	while (t < 8)
	{
		u = 0;
		while (u < 8)
		{
			_putchar(a[t][u]);
			u++;
		}
		_putchar('\n');
		t++;
	}
}
