#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: bytes of the memeory
 *
 * Return: 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	z = 0;
	while (z < n)
	{
		s[z] = b;
		z++;
	}
	return (s);
}
