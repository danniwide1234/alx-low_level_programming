#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string using recursion
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 +  _strlen_recursion(s + 1));
	}
}

/**
 * compareSubstring - Compare characters in a string
 *
 * @s: The string
 * @z1: The smallest iterator
 * @z2: The largest iterator
 *
 * Return: 1 if a palindrome, 0 if not
 */
int compareSubstring(char *s, int z1, int z2)
{
	if (*(s + z1) == *(s + z2))
	{
		if (z1 == z2 || z1 == z2 + 1)
		{
			return (1);
		}
		return (compareSubstring(s, z1 + 1, z2 - 1));
	}
	return (0);
}

/**
 * compareFullString - Check if a string is a palindrome
 *
 * @s: The string to check
 * @length: Length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int compareFullString(char *s, int length)
{
	if (length == 0)
	{
		return (1);
	}
	return (compareSubstring(s, 0, length - 1));
}

/**
 * is_palindrome - function to determine the string lenght
 *
 * @s: string to be checked
 *
 * Return: Result of the function (1 if a palindrome, 0 if not)
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (compareFullString(s, length));
}
