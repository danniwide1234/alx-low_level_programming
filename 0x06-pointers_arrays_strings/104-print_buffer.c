# include "main.h"
# include <stdio.h>

/**
 * print_buffer -  function that prints a buffer
 *
 * @b: buffer in question
 * @size: size in view
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a = 0;
	int f;
	int k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		f = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (k = 0; k < 10; k++)
		{
			if (k < f)
				printf("%02x ", *(b + a + k));
			else
				printf("  ");
			if (k % 2)
			{
				printf("  ");
			}
		}
		for (k = 0; k < f; k++)
		{
			int c = *(b + a + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
