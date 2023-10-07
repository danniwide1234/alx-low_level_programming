#include <stdio.h>

/**
 * main - The starting point for compilation
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
