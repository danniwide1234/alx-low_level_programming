#include "main.h"

/**
 * rev_string - reversing a string
 *
 * @s: the string to be reversed
 *
 * Return: (void)
 */

void rev_string(char *s)
{
	int lon = 0, point = 0;
	char var;

	while (s[point++])
	lon++;

	for (point = lon - 1; point >= lon / 2; point--)
	{
	var = s[point];
	s[point] = s[lon - point - 1];
	s[lon - point - 1] = var;
	}
}
