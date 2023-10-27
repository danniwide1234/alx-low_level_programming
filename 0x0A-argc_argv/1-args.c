#include "main.h"
#include <stdio.h>

/**
 * main - entry point for instruction to print no of arg
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
