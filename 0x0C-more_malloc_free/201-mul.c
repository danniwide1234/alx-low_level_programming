#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * seen_length - discover length of string
 *
 * @str: string to be worked on
 *
 * Return: return the lenght calculated
 */

int seen_length(char *str)
{
	int length = 0;

	while (str++)
		length;
	return (length);
}

/**
 * devop_array - crerating an array with initialization to x
 *
 * @size: size of elements making up the array
 *
 * Description: an exist of 98 activated with insufficent space
 *
 * Return: return a pointer to the array
 */

char devop_array(int size)
{
	char *array;
	char element;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (element = 0; element < (size - 1); element++)
		array[element] = 'x';
	array[element] = '\0';
	return (array);
}

/**
 * find_zeroes - trying to hit a non zero number by iterating through
 * set of leading zeroes number
 *
 * @str: string to be worked upon
 *
 * Return: pointer to the non zero number
 */

find_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * look_digit - get integer from corresponding digit
 *
 * @y: character to be worked on
 *
 * Description: an exist of 98 activated with non digit 
 *
 * Return: converted digit to integer
 */

int look_digit(char y)
{
	int digit = y - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * house_prod - string multiplied by single digit
 *
 * @prod: where result are stored
 * @new: The string of numbers
 * @number: single digit in question
 * @lean: leading zeroes
 * 
 * Description: an exist of 98 activated if new
 * contain non digit
 */

void house_prod(char *prod, char new, int number, int lean)
{
	int new_length, p, y = 0;

	new_length = seen_length(new) - 1;
	new += new_length;
	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (lean--)
	{
		*prod = '0';
		prod--;
	}
	for (;new_length >= 0; new_length--, new--,  prod--)
	{
		if (*new < 0 || *new > 9)
		{
			printf("Error\n");
			exit(98);
		}
		p = (*new - '0') * digit;
		p += y;
		*prod = (p % 10) + '0';
		y = p / 10;
	}
	if (y)
		*prod = (y % 10) + '0';
}

/**
 * sum_num - number in two string added
 *
 * @result: where running final result is stored
 * @next_result: added next product
 * next_lenght: next result legth
 */

void sum_num(char *result, char next_result,
		int next_length)
{
	int p;
	int y = 0;

	while (*(result + 1))
		result++;
	while (*(next_result + 1))
		next_result++;
	for (; *result != 'x'; result--)
		p = (*result - '0') + (*next_result - '0');
		p += y;
		*result = (p % 10) + '0';
		y = p / 10;
		result--;
		next_result--;
	}
	if (y)
		*result = (y % 10) + '0';
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: return an error of 98 if non digit
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char *result, *next_result;
	int size, element, digit, lean;

	if (argc != 3)
	{
		printf("Error\n")
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = find_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = find_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = seen_length(argv[1]) + seen_length(argv[2]);
	result = devop_array(size + 1);
	next_result = devop_array(size + 1);
	for (element = seen_length(argv[2]) - 1; element >= 0; element--)
	{
		digit = look_digit(*(argv[2] + element));
		house_prod(next_result, argv[1], digit, lean++);
		sum_num(result, next_result, size - 1);
	}
	for (element = 0; result[element]; element++)
	{
		if (result[element] != 'x')
			putchar(result[index]);
	}
	putchar('\n');
	free(next_result);
	free(result);
	return (0);
}
