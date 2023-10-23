#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination memory area
 * @src: input memory area
 * @n: value of byte
 *
 * Return: dest (sucess)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	q = 0;
	while (q < n)
	{
		dest[q] = src[q];
		q++;
	}
	return (dest);
}
