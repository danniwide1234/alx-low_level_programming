#include "main.h"

/**
 * _atoi - function that convert to integer from a string
 *
 * @s: string to be worked upon
 *
 * Return: (integer)
 */

int _atoi(char *s)
{
	int a = 1;
	int k = 0;
	unsigned int b = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
		{
			a *= -1;

		}
		k++;
	}
	while (s[k] <= '9' && s[k] >= '0' && s[k] != '\0')
	{
		b = (b * 10) + (s[k] - '0');
		k++;
	}
	b *= a;
	return (b);
}
