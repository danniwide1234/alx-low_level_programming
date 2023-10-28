#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point to give instruction
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int k;
	unsigned int  p;
	unsigned int add = 0;
	char *f;

	if (argc > 1)
	{
		for (k = 1;  k < argc; k++)
		{
			f = argv[k];
			for (p = 0; p < strlen(f); p++)
			{
				if (f[p] < '0' || f[p] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(f);
			f++;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
