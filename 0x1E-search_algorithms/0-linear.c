#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int t;

	if (array == NULL)
		return (-1);

	for (t = 0; t < (int)size; t++)
	{
		printf("Value checked array[%u] = [%d]\n", t, array[t]);
		if (value == array[t])
			return (t);
	}
	return (-1);
}
