#include <stdio.h>

/**
 * main - Starting point for compilation
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter++);
	}
	putchar('\n');
	return (0);
}

