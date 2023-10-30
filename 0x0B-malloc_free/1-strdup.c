#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 *
 * @str: string to be worked on
 *
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	int s = 0;
	int j = 1;
	char *k;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	k = malloc((sizeof(char) * j) + 1);

	if (k == NULL)
	{
		return (NULL);
	}
	while (s < j)
	{
		k[s] = str[s];
		s++;
	}
	k[s] = '\0';
	return (k);
}
