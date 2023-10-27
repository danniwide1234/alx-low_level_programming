#include "main.h"

/**
 * _memset - specific value to be filled in a block of memory
 *
 * @s: first adress available for filling
 * @b: expected value
 * @n: byte number
 *
 * Return: for n bytes resultant changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
