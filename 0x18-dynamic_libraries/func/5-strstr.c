#include "main.h"

/**
 * _strstr - entry point for function
 *
 * @haystack: value of input
 * @needle: another input
 *
 * Return: 0 (sucess)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *k = needle;

		while (*c == *k && *k != '\0')
		{
			c++;
			k++;
		}
		if (*k == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
