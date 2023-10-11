#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @f: The starting number.
 */


void print_to_98(int f)
{
	int step = (f <= 98) ? 1 : -1;

	while (f != 99)
	{
		printf("%d%s", f, (f != 98) ? ", " : "\n");
		f += step;
	}
}
