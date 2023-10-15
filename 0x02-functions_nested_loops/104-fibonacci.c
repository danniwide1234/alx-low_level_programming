#include <stdio.h>

/**
 * main - starting point for compilation
 *
 * Return: 0 (success)
 */

int main(void)
{
	int number;
	unsigned long fibo1 = 0, fibo2 = 1, add;
	unsigned long fibo1_less1, fibo2_less1, fibo1_less2, fibo2_less2;

	for (number = 0; number < 92; number++)
	{
		add = fibo1 + fibo2;
		printf("%lu, ", add);
		fibo1 = fibo2;
		fibo2 = add;

	}
	fibo1_less1 = fibo1 / 10000000000;
	fibo2_less1 = fibo2 / 10000000000;
	fibo1_less2 = fibo1 % 10000000000;
	fibo2_less2 = fibo2 % 10000000000;
	for (number = 93; number < 99; number++)
	{
		unsigned long less1 = fibo1_less1 + fibo2_less1;
		unsigned long less2 = fibo1_less2 + fibo2_less2;

		if (fibo1_less2 + fibo2_less2 > 999999999)
		{
			less1 += 1;
			less2 %= 10000000000;

		}
		printf("%lu%010lu", less1, less2);
		if (number != 98)
		{
			printf(", ");
		}
		fibo1_less1 = fibo2_less1;
		fibo1_less2 = fibo2_less2;
		fibo2_less1 = less1;
		fibo2_less2 = less2;
		}
		printf("\n");
		return (0);
}
