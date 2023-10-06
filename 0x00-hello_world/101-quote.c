#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point c program that print information without using
 * printf, puts or putchar
 *
 * Return: 1 (successful)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}

