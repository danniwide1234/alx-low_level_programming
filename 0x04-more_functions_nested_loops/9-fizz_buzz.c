#include <stdio.h>

/**
 * main - entry point for compilation
 *
 * Return: 0 (success)
 */

int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 3 == 0 && l % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (l % 5 == 0 && l % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (l % 3 == 0 && l % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (l == 1)
		{
			printf("%d", l);
		}
		else
		{
			printf(" %d", l);
		}
	}
	printf("\n");
	return (0);
}
