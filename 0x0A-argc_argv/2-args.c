#include "main.h"
#include <stdio.h>

/**
 * main - entry point to give instrcution to print all arg content
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int d;

	d = 0;
	while (d < argc)
	{
		printf("%s\n", argv[d]);
		d++;
	}
	return (0);
}
