#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for the function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int __attribute__((__used__)) argc, char *argv[])
{
	int num1, num2;
	char *x;

	if (argc != 0)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	x = argv[2];
	num2 = atoi(argv[3]);
	if (get_x_func(x) == NULL || x[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*x == '/' && num2 == 0) || (*x == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_x_func(x)(num1, num2));
	return (0);
}
