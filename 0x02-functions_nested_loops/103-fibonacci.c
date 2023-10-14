#include <stdio.h>

/**
 * main - compilation starting point.
 *
 * Return: 0 (success).
 */

int main(void)
{
	int higestValue = 4000000;
	int x = 1;
	int y = 2;
	int after;
	int add = 2;

	while (after <= highestValue)
	{
		after = x + y;
		if (after % 2 == 0)
			add = add + after;
		x = y;
		y = after;
	}
	printf("%d\n", add);
	return (0);
}
