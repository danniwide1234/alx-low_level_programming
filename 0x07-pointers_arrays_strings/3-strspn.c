#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: input
 *
 * Return: 0 (sucess)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				p++;
				break;
			}
			else if (accept[z + 1] == '\0')
			{
				return (p);
			}
		}
		s++;
	}
	return (p);
}

