#include "main.h"

/**
 * _strspn - starting point of the program
 *
 * @s: input value
 * @accept: other input value
 *
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			p++;
			break;
		}
		if (accept[t + 1] == '\0')
		{
			return (p);
		}
		s++;
	}
	return (p);
}
