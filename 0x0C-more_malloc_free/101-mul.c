#include <stdio.h>
#include <stdlib.h>

/**
 * int_length - determine the length of an integer
 *
 * @n: the integer to be measured
 *
 * Return: the length of the integer
 */

int int_length(int n)
{
	int length = 0;

	while (n)
	{
		n /= 10;
		length++;
	}

	return (length);
}

/**
 * seen_length - determine the length of a string
 *
 * @str: the string to be measured
 *
 * Return: the length of the string
 */

int seen_length(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * add_leading_zeros - add leading zeroes to a string
 *
 * @str: the string to add leading zeroes to
 * @n: the number of leading zeroes to add
 *
 * Return: a pointer to the new string
 */

char *add_leading_zeros(char *str, int n)
{
	int i;
	char *new_str;

	new_str = malloc(sizeof(char) * (n + seen_length(str) + 1));
	if (new_str == NULL)
	{
		free(str);
		exit(98);
	}

	for (i = 0; i < n; i++)
	{
		new_str[i] = '0';
	}

	for (i = n; i < n + seen_length(str); i++)
	{
		new_str[i] = str[i - n];
	}

	new_str[n + seen_length(str)] = '\0';

	free(str);
	return (new_str);
}

/**
 * times_strings - multiply two strings of numbers
 *
 * @str1: the first string
 * @str2: the second string
 *
 * Return: a pointer to the new string
 */

char *times_strings(char *str1, char *str2)
{
	int i, j, carry;
	char *product;

	product = malloc(sizeof(char) * (seen_length(str1) + seen_length(str2) + 2));
	if (product == NULL)
	{
		free(str1);
		free(str2);
		exit(98);
	}

	carry = 0;
	for (i = seen_length(str1) - 1; i >= 0; i--)
	{
		for (j = seen_length(str2) - 1; j >= 0; j--)
		{
			product[i + j + 1] += (str1[i] - '0') * (str2[j] - '0') + carry;
			carry = product[i + j + 1] / 10;
			product[i + j + 1] %= 10;
		}

		product[i + seen_length(str2)] = carry + '0';
		carry = 0;
	}

	product[0] = '\0';

	free(str1);
	free(str2);
	return (product);
}

/**
 * main - entry point
 *
 * @argc: the number of command-line arguments
 * @argv: the array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int x, y;
	char *str_x, *str_y, *product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	str_x = add_leading_zeros(argv[1], int_length(y));
	str_y = add_leading_zeros(argv[2], int_length(x));

	product = times_strings(str_x, str_y);

	printf("%s\n", product);

	free(str_x);
	free(str_y);

	return (0);
}
