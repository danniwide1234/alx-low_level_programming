#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: available size of the array to be filled
 * @c: character to worked on
 *
 * Return: filled array to be returned
 */

char *create_array(unsigned int size, char c)
{
	unsigned int v;
	char *r;

	if (size == 0)
	{
		return (NULL);
	}
	r = malloc(size * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	for (v = 0; v < size; v++)
	{
		r[v] = c;
	}
	return (r);
}
