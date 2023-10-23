#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: parent string
 * @needle: substring
 *
 * Return: NULL (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *form = haystack;
		char *new = needle;

		while (*form == *new && *new != '\0')
		{
			form++;
			new++;
		}
		if (*new == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
