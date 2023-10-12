#include "main.h"

/**
 * positive_or_negative - tests the positive_or_negative()
 *function with the case of 0
 *
 * @i: The number to be checked.
 *
 * Return: No return value (void)
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}

	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}

	else
	{
		printf("%d is %s\n", i, "zero");
	}
}

