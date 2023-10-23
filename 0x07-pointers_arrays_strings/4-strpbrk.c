#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: input
 *
 * Return: NULL (sucess)
 */

char *_strpbrk(char *s, char *accept)
{
	int f;
	int g;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (s[f] == accept[g])
			{
				return (s + f);
			}
		}
	}
	return (NULL);
}
