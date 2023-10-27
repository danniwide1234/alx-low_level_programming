#include "main.h"

/**
 * _strpbrk - entry point for the function
 *
 * @s: entry input
 * @accept: another input
 *
 * Return: 0 (success
 */

char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}
