#include "main.h"

/**
 * _islower - checks for lowercase letters.
 *
 * @c: The character to be examined.
 * Return: 1 if c is a lower case, 0 otherwise.
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

