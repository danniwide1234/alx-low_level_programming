#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: resulting integer value
 */

int *array_range(int min, int max)
{
	int *z;
	int k = 0;

	if (min > max)
	{
		return (NULL);
	}
	z = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (z == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		z[k] = min;
		k++;
		min++;
	}
	return (z);
}
