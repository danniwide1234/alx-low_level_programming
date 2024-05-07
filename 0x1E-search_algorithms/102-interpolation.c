#include "search_algos.h"

/**
  * interpolation_search - Search for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Print a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t b, h, p;

	if (array == NULL)
		return (-1);

	for (h = 0, p = size - 1; p >= h;)
	{
		b = h + (((double)(p - l) / (array[p] - array[h])) * (value - array[h]));
		if (b < size)
			printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", b);
			break;
		}

		if (array[b] == value)
			return (b);
		if (array[b] > value)
			p = b - 1;
		else
			h = b + 1;
	}

	return (-1);
}
