#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @n: value of input
 *
 * Return: value of n
 */

char *leet(char *n)
{
	int y;
	int z;
	char m1[] = "aAeEoOtTlL";
	char m2[] = "4433007711";

	for (y = 0; n[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[y] == m1[z])
			{
				n[y] = m2[z];
			}
		}
	}
	return (n);
}
