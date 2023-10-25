#include "main.h"
#include <stdio.h>

int _sqrt(int n, int k);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: number to be worked upon
 *
 * Return: result of the operation
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *  _sqrt - natural square root to be calculated
 *
 *  @n: number to be worked upon
 *  @k: number to be iterated
 *
 *  Return: return the result
 */

int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (k);
	}
	return (_sqrt(n, k + 1));
}
