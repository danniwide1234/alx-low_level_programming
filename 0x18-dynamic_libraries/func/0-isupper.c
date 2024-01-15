#include "main.h"

/**
 * _isupper - to dertermine if character in question is uppercase
 *
 * @c: argument character to be checked
 *
 * Return: 0 if not true but 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
