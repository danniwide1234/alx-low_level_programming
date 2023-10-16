#include <stddef.h>

/**
 *  _strlen - function that return the lenght of a string
 *
 * @str: the sctring in question
 *
 * Return: The lenght of @str
 */

size_t _strlen(const char *str)
{
	size_t lenght = 0;

	while (*str != '\0')
	{
		lenght++;
		str++;
	}

	return (lenght);
}

