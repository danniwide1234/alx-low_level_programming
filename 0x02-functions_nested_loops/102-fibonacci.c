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

	printf("%lu, %lu", p, q);
	for (z = 2; z < 50; z++)
	{
		after = p + q;
		printf(", %lu", after);
		p = q;
		q = after;
	}
	printf("\n");
	return (0);
}
