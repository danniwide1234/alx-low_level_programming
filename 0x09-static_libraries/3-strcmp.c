#include "main.h"

/**
 * _strcmp - comparing string values by a function
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: different in the values
 */

int _strcmp(char *s1, char *s2)
{
	int g = 0;

	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
	g++;
	}
	return (0);
}
