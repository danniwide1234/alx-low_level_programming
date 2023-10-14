#include <stdio.h>

/**
 * main - entry point for compilation.
 *
 * Return: (void)
 */

int main(void)
{
	int add = 0;
	int y;

	for (y = 0; y < 10; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
			add = add + 1;
	}
	printf("%d\n", add);
}
