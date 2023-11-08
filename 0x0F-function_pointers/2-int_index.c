#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: array to be wprked on
 * @size: no of elements in array
 * @cmp: pointer function
 *
 * Return: 0 (sucess)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
		{
			return (k);
		}
	}
	return (-1);
}
