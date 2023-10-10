#include "main.h"

/**
 * print_alphabet_x10 - Alphabets are printed 10 times in small letter
 *
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	char smallLetter = 'a';
	int count = 1;

	while (count <= 10)
	{
		while (smallLetter <= 'z')
		{
			_putchar(smallLetter++);
		}
		_putchar('\n');
		smallLetter = 'a';
		count++;
	}
}

