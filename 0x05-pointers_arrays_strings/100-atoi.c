#include "main.h"
#include <stdbool.h>

/**
 * _atoi - Function that converts a string to an integer.
 * @s: The pointer to work on.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int m = 0;
	unsigned int k = 0;
	bool is_negative = false;

	while (s[m] && (s[m] < '0' || s[m] > '9'))
	{
	if (s[m] == '-')
	{
	is_negative = !is_negative;
	}
	m++;
	}

	while (s[m] >= '0' && s[m] <= '9')
	{
	k = (k * 10) + (s[m] - '0');
	m++;
	}
	return (is_negative ? -k : k);
}
