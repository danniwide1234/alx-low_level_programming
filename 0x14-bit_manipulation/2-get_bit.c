#include"main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 *
 * @n: bit in checking number
 * @index: point at which to check bit
 *
 * Return: bit value, or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cutting, look;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	cutting = 1 << index;
	look = n & cutting;
	if (look == cutting)
		return (1);
	return (0);
}
