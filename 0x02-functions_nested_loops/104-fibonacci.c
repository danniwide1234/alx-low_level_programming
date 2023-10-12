#include "main.h"

/**
 * print_fibonacci - print fibonnanci nuber.
 *
 * Return: void
 */

void print_fibonacci(void)
{
	unsigned long fibo1 = 1, fibo2 = 2, fibo_next;
	unsigned long divisor;
	unsigned long temp;
	int count = 2;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');
	_putchar(',');
	_putchar(' ');

	while (count < 98)
	{
		fibo_next = fibo1 + fibo2;
		divisor = 1;
		temp = fibo_next;

		while (divisor <= temp / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchar((temp / divisor) + '0');
			temp %= divisor;
			divisor /= 10;
		}

		if (count < 97)
		{
			_putchar(',');
			_putchar(' ');
		}
		fibo1 = fibo2;
		fibo2 = fibo_next;

		count++;
	}
	_putchar('\n');
}
