#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_null_string - To handle null string.
 *
 * @str: destination string
 *
 * Return: void
 */

char *handle_null_string(char *str)
{
	if (str == NULL)
	{
		return ("");
	}
	return (str);
}
/**
 * calculate_string_length - To calculate lenght of string.
 *
 * @str: destination string
 *
 * Return: void
*/

int calculate_string_length(char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}
	return (length);
}

/**
 * copy_strings - Copies characters from one string to another.
 *
 * @dest: The destination string.
 * @src: The source string
 * @length: The number of characters to copy
 */

void copy_strings(char *dest, char *src, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
}

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: rsult of total lenght
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, total_length;
	char *result;

	s1 = handle_null_string(s1);
	s2 = handle_null_string(s2);

	len_s1 = calculate_string_length(s1);
	len_s2 = calculate_string_length(s2);

	total_length = len_s1 + len_s2;
	result = malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	copy_strings(result, s1, len_s1);
	copy_strings(result + len_s1, s2, len_s2);
	result[total_length] = '\0';
	return (result);
}
