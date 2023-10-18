#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string pointer
 * @s2: secong string pointer
 *
 * Return: negative difference of the unmatched characters, if str1 < str2
 * if str1 == str2, 0
 * positive difference of the unmatched characters, if str1 > str2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
