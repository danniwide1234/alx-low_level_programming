#include <stdio.h>

/**
 * sum_even_fibonacci - Calculate the sum of even Fibonacci
 * terms up to a limit.
 *
 * @limit: The upper limit for Fibonacci terms
 *
 * Return: The sum of even Fibonacci terms.
 */

unsigned long sum_even_fibonacci(unsigned long limit)
{
	unsigned long fibo1 = 1, fibo2 = 2, fibo_next, sum = 0;

	while (fibo2 <= limit)
	{
		if (fibo2 % 2 == 0)
		{
			sum += fibo2;
		}

		fibo_next = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo_next;
	}

	return (sum);
}

/**
 * main - entry point for compiler
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long limit = 4000000;
	unsigned long result = sum_even_fibonacci(limit);

	printf("%lu\n", result);

	return (0);
}
