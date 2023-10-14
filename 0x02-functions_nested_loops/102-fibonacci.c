#include <stdio.h>

/**
 * main - Starting point for compilation.
 *
 * Return: 0 (success).
 */

int main(void)
{
	unsigned long int p = 1;
	unsigned long int q = 2;
	unsigned long int after;
	int z;

	printf("%lu, ", p);
	for (z = 1; z < 50; z++)
	{
		printf("%lu, ", q);
		after = p + q;
		p = q;
		q = after;
		if (z != 49)
			printf(", ");
	}
	printf("\n")
	return (0);
}
