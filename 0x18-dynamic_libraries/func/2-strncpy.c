#include "main.h"

/**
 * _strncpy - string copying function
 *
 * @dest: destination value
 * @src: input value
 * @n: value of input
 *
 * Return: (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
