#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @z: The number to be examined.
 *
 * Return: 1 and prints + if z is greater than zero,
 *         0 and prints 0 if z is zero,
 *        -1 and prints - if z is less than zero.
 */


int print_sign(int z)
{
	char sign;

	if (z > 0)
	{
		sign = '+';
	}
	else if (z == 0)
	{
		sign = '0';
	}
	else
	{
		sign = '-';
	}

	_putchar(sign);
	return ((z == 0) ? 0 : ((z > 0) ? 1 : -1));
}
