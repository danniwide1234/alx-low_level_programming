#include "main.h"

/**
 * _strncat - concatenate of two strings by a program
 *
 * @dest: value of destination area
 * @src: input value area
 * @n: value to be entered
 *
 * Return: return value of destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int h, m;

	h = 0;
	m = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	while (m < n && src[m] != '\0')
	{
		dest[h] = src[m];
		h++;
		m++;
	}
	dest[h] = '\0';
	return (dest);
}
