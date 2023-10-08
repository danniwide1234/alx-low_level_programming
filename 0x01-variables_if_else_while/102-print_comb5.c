#include <stdio.h>

/**
 * main - Entry point for compilation
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit0 = 0, digit1 = 1;

	while (digit0 <= 98)
	{
		while (digit1 <= 99)
		{
			putchar((digit0 / 10) + '0');
			putchar((digit0 % 10) + '0');
			putchar(' ');
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit0 != 98 || digit1 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}

		digit0++;
		digit1 = digit0 + 1;
	}

	putchar('\n');
	return (0);
}
