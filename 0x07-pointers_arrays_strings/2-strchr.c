#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: NULL (sucess)
 */

char *_strchr(char *s, char c)
{
	int k;

	k = 0;
	while (s[k] >= '\0')
	{
		if (s[k] == c)
		{
			return (s + k);
		}
		k++;
	}
	return (NULL);
}
