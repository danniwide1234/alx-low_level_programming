#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that print a string in reverse
 *
 * @s: printing the string
 *
 * Return: (void)
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
	k++;
	}

	for (k -= 1; k >= 0; k--)
	{
	_putchar(s[k]);
	}
	_putchar('\n');
}
