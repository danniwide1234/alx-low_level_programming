#include <stdio.h>

/**
 * main - Compiler entry point
 * Return: 0 (success)
 */

int main(void)
{
	int z = 0;

	for (z = 0; z < 10; z++)
	{
		putchar(z + '0');
		if (z < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
