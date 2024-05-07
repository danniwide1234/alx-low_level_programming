#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: array input
 * @size: array size
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t tow, low, high;
	double j;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		j = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		tow = (size_t)(low + j);
		printf("Value checked array[%d]", (int)tow);

		if (tow >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[tow]);
		}

		if (array[tow] == value)
			return ((int)tow);

		if (array[tow] < value)
			low = tow + 1;
		else
			high = tow - 1;

		if (low == high)
			break;
	}

	return (-1);
}
