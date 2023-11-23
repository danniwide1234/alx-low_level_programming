#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: number one
 * @m: number two
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, bitcount = 0;
	unsigned long int now;
	unsigned long int special = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		now = special >> k;
		if (now & 1)
			bitcount++;
	}

	return (bitcount);
}
