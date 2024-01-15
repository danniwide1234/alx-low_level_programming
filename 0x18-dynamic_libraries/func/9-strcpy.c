#include "main.h"

/**
 * _strcpy - string pointing to src are copied by program
 *
 * @dest: copy destination
 * @src: where copying from
 *
 * Return: value of the string
 */

char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int t = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (; t < p ; t++)
	{
		dest[t] = src[t];
	}
	dest[p] = '\0';
	return (dest);
}
