#include <stdio.h>

/**
 * main - starting point for compilation
 *
 * Return: 0 (success)
 */

int main(void)
{
	int m;
	unsigned long int c = 1, d = 2, after;

	printf("1, 2");

	for (m = 2; m < 98; m++)
	{
		after = c + d;
		printf(", %lu", after);

		c = d;
		d = after;
	}

	printf("\n");
	return (0);
}
