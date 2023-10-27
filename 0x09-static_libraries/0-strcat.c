#include "main.h"

/**
 * _strcat - cocantenate of two strings by a function
 *
 * @dest: resulting value
 * @src: value being entered
 *
 * Return: (void)
 */

char *_strcat(char *dest, char *src)
{
	int v, z;

	v = 0;
	z = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	while (src[z] != '\0')
	{
		dest[v] = src[z];
		v++;
		z++;
	}
	dest[v] = '\0';
	return (dest);
}
