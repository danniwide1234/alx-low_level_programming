#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int mn = 0, f = 0, g = 0, h = 0;
	char *k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < ac; f++)
	{
		for (g = 0; av[f][g]; g++)
		{
			mn++;
		}
		mn++;
	}

	k = malloc(mn + 1);
	if (k == NULL)
	{
		return (NULL);
	}

	for (f = 0, h = 0; f < ac; f++)
	{
		for (g = 0; av[f][g]; g++, h++)
		{
			k[h] = av[f][g];
		}
		k[h] = '\n';
		h++;
	}

	k[h] = '\0';
	return (k);
}
