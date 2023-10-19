#include "main.h"

/**
 * add_digits - Add two digits and a carry
 */
int add_digits(int a, int b, int *carry)
{
	int result = a + b + *carry;
	*carry = result / 10;
	return (result % 10);
}

/**
 * infinite_add - Add two numbers as strings
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0;
	int b = 0;
	int carry = 0;
	int result;
	int r_index = 0;

	/* Calculate the lengths of n1 and n2 */
	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;

	a--;
	b--;

	/* Check if the result buffer size is sufficient */
	if (b >= size_r || a >= size_r)
		return (0);

	/* Add digits and build the result */
	while (b >= 0 || a >= 0 || carry > 0)
	{
		int digit1 = (a >= 0) ? *(n1 + a) - '0' : 0;
		int digit2 = (b >= 0) ? *(n2 + b) - '0' : 0;
		
		result = add_digits(digit1, digit2, &carry);

		/* further condition */
		if (r_index >= (size_r - 1))
			return (0);

		*(r + r_index) = result + '0';
		r_index++;
		b++;
		a++;
	}

	if (r_index == size_r)
	return (0);

	/* Null-terminate the result and reverse it */
		*(r + r_index) = '\0';
		rev_string(r);
		return (r);
}

