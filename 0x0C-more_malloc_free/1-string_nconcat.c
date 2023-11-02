#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[c])
	{
		c++;
	}
	if (n >= c)
	{
		d = a + c;
	}
	else
	{
		d = a + n;
	}
	len = malloc(sizeof(char) * d + 1);
	if (len == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (b < d)
	{
		if (b <= a)
		{
			len[b] = s1[b];
		}
		if (b >= a)
		{
			len[b] = s2[c];
			c++;
		}
		b++;
	}
	len[b] = '\0';
	return (len);
}
