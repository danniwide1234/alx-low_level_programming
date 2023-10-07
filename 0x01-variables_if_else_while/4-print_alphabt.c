#include <stdio.h>

/**
 * main - Starting point for the compiler
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter++);
		}
	}
	putchar('\n');
	return (0);
}
