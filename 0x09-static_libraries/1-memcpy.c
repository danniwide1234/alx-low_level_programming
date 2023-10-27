#include "main.h"

/**
 * _memcpy - copy memory areabt a prpgram
 *
 * @dest: sotred memory area
 * @src: copied memory area
 * @n: bytes number
 *
 * Return: changed memeory byte returned
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int f = n;

	for (; d < f; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
