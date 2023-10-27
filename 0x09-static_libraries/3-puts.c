#include "main.h"

/**
 * _puts - print string to stdout
 *
 * @s: the string to be worked upon
 *
 * _putchar: tools used in printing a new line
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
