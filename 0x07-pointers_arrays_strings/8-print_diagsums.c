#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a : input
 * @size: size input
 *
 * Return: 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int k, m;
	int addOne = 0;
	int addTwo = 0;

	for (k = 0; k <= (size * size); k = k + size + 1)
	{
		addOne = addOne + a[k];
	}
	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
	{
		addTwo = addTwo + a[m];
	}
	printf("%d, %d\n", addOne, addTwo);
}

