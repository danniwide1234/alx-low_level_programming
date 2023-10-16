#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integers
 * @b: second integers
 *
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
