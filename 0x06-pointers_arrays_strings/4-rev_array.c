#include "main.h"

/**
 * 4-rev_array.c - function that reverses the content of an array of integers
 *
 * @a: integers array to be reversed
 * @n: elements numbers in the array
 */

void reverse_array(int *a, int n)
{
	int store;
	int count;

	for (count = n - 1; count >= n / 2; count--)
	{
		store = a[n - 1 - count];
		a[n - 1 - count] = a[count];
		a[count] = store;
	}
}
