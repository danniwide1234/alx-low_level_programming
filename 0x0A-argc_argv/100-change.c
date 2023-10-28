#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to start a program to print min of coin
 *
 * @argc: argument count
 * @argv: argument vctor
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int cent;
	int koin = 0;

	if (argc != 2)
	{
		printf("Error\n");
			return (1);
	}
	cent = atoi(argv[1]);

	while (cent > 0)
	{
		koin++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", koin);
	return (0);
}

