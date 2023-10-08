#include <stdio.h>

/**
 * main - entry point for compilation
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit0 = 0;
	int digit1 = 1;
	int digit2 = 2;

	while (digit0 <= 7)
	{
		digit1 = digit0 + 1;
		while (digit1 <= 8)
		{
			digit2 = digit1 + 1;
			while (digit2 <= 9)
			{

				putchar(digit0 + '0');
				putchar(digit1 + '0');
				putchar(digit2 + '0');

				if (!(digit0 == 7 && digit1 == 8 && digit2 == 9))
				{
					putchar(',');
					putchar(' ');
				}

				digit2++;
			}
			digit1++;
		}
		digit0++;
	}

	putchar('\n');
	return (0);
}
