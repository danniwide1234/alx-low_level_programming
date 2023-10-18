#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: The destination string where the result will be stored
 *
 * @src: The source string to be concatenated to the destination
 *
 * Return: A pointer to the resulting string stored in `dest`
 */

char *_strcat(char *dest, char *src)
{
	int e = 0;
	int f = 0;

	while (dest[e] != '\0')
	{
		e++;
	}

	while (src[f] != '\0')
	{
		dest[e] = src[f];
		e++;
		f++;
	}
	dest[e] = '\0';
	return (dest);
}

