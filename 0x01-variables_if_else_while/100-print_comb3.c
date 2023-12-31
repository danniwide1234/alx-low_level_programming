#include <stdio.h>

/**
 * main - entry point for compiler
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit0 = 0;
	int digit1 = 1;

	while (digit0 <= 8)
	{
		while (digit1 <= 9)
		{
			putchar(digit0 + '0');
			putchar(digit1 + '0');

			if (digit0 != 8 || digit1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
			digit1++;
		}
		digit0++;
		digit1 = digit0 + 1;
	}
	return (0);
}
