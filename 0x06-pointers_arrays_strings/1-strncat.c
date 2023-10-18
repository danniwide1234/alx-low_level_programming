#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 *
 * @dest: The string to e worked upon
 *
 * bytes are being inputed for src
 *
 * @src: the string to be concatenate to dest
 *
 * @n: no of bytes from src
 *
 * Return: return a value for the function
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int destLong = 0;

	while (dest[count++])
	{
		destLong++;
	}
	for (count = 0; src[count] && count < n; count++)
	{
		dest[destLong++] = src[count];
	}
	return (dest);
}
