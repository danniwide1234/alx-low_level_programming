#include "main.h"

/**
 * add_digits - Add two digits and a carry
 * @a: first integer
 * @b: second integer
 * @carry: pointer in the function
 * Return: digits added is returned
 */
int add_digits(int a, int b, int *carry)
{
	int result = a + b + *carry;
	*carry = result / 10;
	return (result % 10);
}

/**
 * get_string_length - Calculate the length
 * @str: string character
 *
 * Return: the determined lenght is returned
 */
int get_string_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * reverse_string - Reverse a string in-place
 * @str: the variable string
 */
void reverse_string(char *str)
{
	int length = get_string_length(str);
	int i = 0;
	int j = length - 1;

	while (i < j)
	{
		char temp = str[i];

		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

/**
 * infinite_add - Add two numbers as strings
 * @n1: first calur
 * @n2: second value
 * @r: character variable
 * @size_r: size in relation to r
 *
 * Return: 0 (success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = get_string_length(n1) - 1;
	int b = get_string_length(n2) - 1;
	int carry = 0;
	int r_index = 0;

	/* Check if the result buffer size is sufficient */
	if (b >= size_r || a >= size_r)
		return (0);

	/* Add digits and build the result */
	while (b >= 0 || a >= 0 || carry > 0)
	{
		int digit1 = (a >= 0) ? n1[a] - '0' : 0;
		int digit2 = (b >= 0) ? n2[b] - '0' : 0;
		int result = add_digits(digit1, digit2, &carry);

		if (r_index >= (size_r - 1))
			return (0);

		r[r_index] = result + '0';
		r_index++;
		b--;
		a--;
	}

	if (r_index == size_r)
		return (0);

	/* Null-terminate the result and reverse it */
	r[r_index] = '\0';
	reverse_string(r);
	return (r);
}
