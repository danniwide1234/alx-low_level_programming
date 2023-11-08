#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int space, k;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	space = atoi(argv[1]);
	if (space < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (k = 0; k < space; k++)
	{
		if (k == space - 1)
		{
			printf("%02hhx\n", arr[k]);
			break;
		}
		printf("%02hhx ", arr[k]);
	}
	return (0);
}
