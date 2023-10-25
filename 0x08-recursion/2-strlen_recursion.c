#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: String whose lenght to be calculated
 *
 * Return: value of integers
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
