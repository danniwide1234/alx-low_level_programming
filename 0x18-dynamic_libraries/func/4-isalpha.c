#include "main.h"

/**
 * _isalpha - checking for alphabetical character by the function
 *
 * @c: character to be worked upon
 *
 * Return: 0 if c is not letter and 1 if it is
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
