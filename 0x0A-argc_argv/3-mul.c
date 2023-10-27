#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to follow instruction
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int f, g;

	f = 0;
	g = 0;
	if (argc == 3)
	{
		f = atoi(argv[1]);
		g = atoi(argv[2]);
		printf("%d\n", f * g);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
