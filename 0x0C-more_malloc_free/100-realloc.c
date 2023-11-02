#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 *
 * @old_size: as the name implied
 * @new_size: as the name implied
 * @ptr: pointer
 *
 * Return: Resulting value of function execution
 */

void *_realloc(void *ptr, unsigned int old_size,
		unsigned int new_size)
{
	char *x;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		return (x);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	for (k = 0; k < old_size && k < new_size; k++)
	{
		x[k] = ((char *) ptr)[k];
	}
	free(ptr);
	return (x);
}
