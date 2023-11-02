#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - function that allocates memory for
 * an array, using malloc
 *
 * @nmemb: The array to be worked on
 * @size: the size of the array
 * Return: value of function
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c = 0;
	unsigned int i = 0;
	char *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (nmemb > UINT_MAX / size)
	{
		return (NULL);
	}

	c = nmemb * size;
	x = malloc(c);

	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < c; i++)
	{
		x[i] = 0;
	}
	return (x);
}
