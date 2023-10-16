#include "main.h"

/**
 * _puts - function to print a string
 *
 * @str: printing the string
 * Return: (void)
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
