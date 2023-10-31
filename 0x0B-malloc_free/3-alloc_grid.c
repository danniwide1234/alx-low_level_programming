#include "main.h"
#include <stdlib.h>

/*
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: lenght of width
 * @height: lenght of height
 *
 * Return: value for 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int x, y, z, a;
	int **m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);
		if (m[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(m[y]);
			}
			free(m);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (a = 0; a < width; a++)
		{
			m[z][a] = 0;
		}
	}
	return (m);
}
