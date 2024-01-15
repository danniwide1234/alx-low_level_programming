#include "main.h"

/**
 * _isdigit - function that determine if input is a digit
 *
 * @c: supplied integer to be worked on
 *
 * Return: if c is not a digit 0 but 1 if a digit
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
