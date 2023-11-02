#include "main.h"
#include <stdlib.h>

/**
 * Function declarations
 */

unsigned int calculate_string_length(char *s);
void copy_string_characters(char *dest, char *src);


/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of iteration
 *
 * Return: The resulting value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  /* Declarations and initializations. */
	unsigned int len;
	char *result;

  /* Calculate the length of the resulting string. */
	len = calculate_string_length(s1) + calculate_string_length(s2);
	if (n < calculate_string_length(s2))
	{
		len -= calculate_string_length(s2) - n;
	}

  /* Allocate memory for the resulting string. */
	result = malloc(sizeof(char) * len + 1);
	if (result == NULL)
	{
		return (NULL);
	}

  /* Copy the characters from the two input strings to the resulting string. */
	copy_string_characters(result, s1);
	copy_string_characters(result + calculate_string_length(s1), s2);

  /* Add a null terminator to the end of the resulting string. */
	result[len] = '\0';

  /* Return the resulting string. */
	return (result);
}


/**
 * calculate_string_length - function that calculates the length of a string
 *
 * @s: string
 *
 * Return: The length of the string
 */
unsigned int calculate_string_length(char *s)
{
  /* Declarations and initializations. */
	unsigned int len;

  /* Calculate the length of the string. */
	len = 0;
	while (s[len])
	{
		len++;
	}

  /* Return the length of the string. */
	return (len);
}

/**
 * copy_string_characters - function that copies characters
 * from one string to another
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: None
 */

void copy_string_characters(char *dest, char *src)
{
  /* Declarations and initializations. */
	unsigned int i;

  /* Copy the characters from the source string to the destination string. */
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

  /* Add a null terminator to the end of the destination string. */
	dest[i] = '\0';
}
