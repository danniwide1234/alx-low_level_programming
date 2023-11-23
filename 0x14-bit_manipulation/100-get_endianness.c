#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 denote big endian, 1 denote little endian
 */

int get_endianness(void)
{
	int k;
	char *z;

	k = 1;
	z = (char *)&k;
	return (*z);
}
