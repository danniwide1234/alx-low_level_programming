#include <stdio.h>

/**
 * main - Compilation entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char smallLetter = 'a';
	char bigLetter = 'A';

	while (smallLetter <= 'z')
	{
		putchar(smallLetter++);
	}
	while (bigLetter <= 'Z')
	{
		putchar(bigLetter++);
	}
	putchar('\n');
	return (0);
}
