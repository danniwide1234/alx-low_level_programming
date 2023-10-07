#include <stdio.h>

/**
 * main - Starting point for compiler
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter--);
	}
	putchar('\n');
	return (0);
}
