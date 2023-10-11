#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @k: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */


int print_last_digit(int k)
{
	int last_digit = k % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar('0' + last_digit);
	}
	return (last_digit);
}
