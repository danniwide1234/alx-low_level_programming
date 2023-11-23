#include "main.h"

/**
 * set_bit - function that sets the value of a
 * bit to 1 at a given index
 *
 * @n: set number
 * @index: set bit point
 *
 * Return: success denote 1, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setmark;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setmark = 1 << index;
	*n = *n | setmark;
	return (1);
}
