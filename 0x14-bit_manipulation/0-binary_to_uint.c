#include "main.h"

/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 *
 * @b: string containing binary no , pointer to it
 *
 * Return: returned unsigned int or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int count;

	count = 0;
	if (!b)
		return (0);
	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}
	for (z = 0; b[z] != '\0'; z++)
	{
		count <<= 1;
		if (b[z] == '1')
			count += 1;
	}
	return (count);
}
