#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @str: the input string to be worked upon
 *
 * Return: pointer to change the string
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
	if (str[count] >= 'a' && str[count] <= 'z')
	str[count] -= 32;
	count++;
	}
	return (str);
}
