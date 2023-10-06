#include <stdio.h>

/**
 * main - An entry point C program that prints the size of
 * various types on the computer.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char z;
	int y;
	long int p;
	long long int x;
	float k;
printf("Size of a char: %lu byte(s)\n", (unsigne
d long)sizeof(z));
printf("Size of a int: %lu byte(s)\n", (unsigned
long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (uns
igned long)sizeof(p));
printf("Size of a long long int: %lu byte(s)\n";
(unsigned long)sizeof(x));
printf("Size of a float: %lu byte(s)\n", (unsign
ed long)sizeof(k));
return (0);
}
