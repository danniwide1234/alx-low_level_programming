#include <stdio.h>

/**
 * main - entry point for compilation.
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int add = 0;
	int y;

	for (y = 0; y < 1024; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
			add = add + 1;
	}
	printf("%d\n", add);
	return (0);
}
