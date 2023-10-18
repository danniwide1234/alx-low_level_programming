#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: storage for the print copies
 *
 * @src: input string
 *
 * @n: highest number of bytes to copied from src
 *
 * Return: pointer to resulting destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int srcLong = 0;

	while (src[count++])
	{
		srcLong++;
	}

	for (count = 0; src[count] && count < n; count++)
	{
		dest[count] = src[count];
	}

	for (count = srcLong; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
