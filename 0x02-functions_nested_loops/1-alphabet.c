#include "main.h"

/**
 * print_alphabet - function to print lower case alphabet
 *
 * Return: (void)
 */

void print_alphabet(void)
{
	char alpLetter = 'a';

	while (alpLetter <= 'z')
	{
		_putchar(alpLetter++);
	}

	_putchar('\n');
}
