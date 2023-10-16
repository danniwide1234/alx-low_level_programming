#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: String to be worked upon
 *
 * Return: (void)
 */

void puts_half(char *str)
{
	int a = 0;
	int c;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	c = (a - 1) / 2;
	c += 1;
	}
	else
	{
	c = a / 2;
	}

	for (; c < a; c++)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
}
