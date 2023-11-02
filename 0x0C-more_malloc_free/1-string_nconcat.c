#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate
 *
 * Return: The resulting concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, concat_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = string_length(s1);
	len_s2 = string_length(s2);

	concat_len = calculate_concat_length(len_s1, len_s2, n);

	result = allocate_memory(concat_len);
	if (result == NULL)
	{
		return (NULL);
	}

	copy_string(result, s1, len_s1);
	copy_string(result + len_s1, s2, n);

	result[concat_len] = '\0';

	return (result);
}

/**
 * string_length - calculates the length of a string
 *
 * @s: input string
 * Return: length of the string
 */
unsigned int string_length(char *s)
{
	unsigned int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}

/**
 * calculate_concat_length - calculates the
 * length of concatenated string
 *
 * @len_s1: length of first string
 * @len_s2: length of second string
 * @n: number of characters to concatenate from s2
 * Return: length of concatenated string
 */
unsigned int calculate_concat_length(unsigned int len_s1,
					unsigned int len_s2,
					unsigned int n)
{
	if (n >= len_s2)
		return (len_s1 + len_s2);
	else
		return (len_s1 + n);
}

/**
 * allocate_memory - allocates memory for a string
 *
 * @len: length of the string
 * Return: pointer to the allocated memory
 */
char *allocate_memory(unsigned int len)
{
	char *ptr = malloc(sizeof(char) * (len + 1));

	return (ptr);
}

/**
 * copy_string - copies characters from source to destination
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy from source
 */
void copy_string(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
}
