#include "main.h"

/**
 * _isalpha - checks for alphabetical character.
 *
 * @c: The character to be examined.
 * Return: 1 if c is alphabetical character, 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
