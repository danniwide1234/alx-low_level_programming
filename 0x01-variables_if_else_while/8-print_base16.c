#include <stdio>

/**
 * main - starting point for the compiler
 *
 * Return - 0 (success)
 */

int main(void)
{
	char hex = '0';

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	if (hex > '9' && hex < 'a')
	{
		hex = 'a';
	}
	}
	putchar('\n');
	return (0);
}
