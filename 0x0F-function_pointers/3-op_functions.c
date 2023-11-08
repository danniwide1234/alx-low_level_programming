#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that add two number together
 *
 * @a: first number in question
 * @b: second number in question
 *
 * Return: result of the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtract two number together
 *
 * @a: first number in question
 * @b: second number in question
 *
 * Return: result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two number together
 *
 * @a: first number in question
 * @b: second number in question
 *
 * Return: result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide two number together
 *
 * @a: first number in question
 * @b: second number in question
 *
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that return the remainder of two
 * number when divided
 *
 * @a: first number in question
 * @b: second number in question
 *
 * Return: result of the remainder after division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
