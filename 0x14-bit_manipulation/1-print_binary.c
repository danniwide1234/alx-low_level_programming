#include "main.h"

/**
 * _pow - function that determine power calculation
 * @index: exponent base
 * @power: exponent power
 *
 * Return: (index ^ power)
 */
unsigned long int _pow(unsigned int index, unsigned int power)
{
	unsigned long int count;
	unsigned int z;

	count = 1;
	for (z = 1; z <= power; z++)
		count *= index;
	return (count);
}

/**
 * print_binary - function that prints the
 * binary representation of a number
 * @n:  print number
 *
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int cutting, look;
	char flag;

	flag = 0;
	cutting = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (cutting != 0)
	{
		look = n & cutting;
		if (look == cutting)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || cutting == 1)
		{
			_putchar('0');
		}
		cutting >>= 1;
	}
}
