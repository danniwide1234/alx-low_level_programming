#include <stdio.h>

/**
 * main - Entry point for comipiler to run
 * Return: 0 (success)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
