#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point for compilation
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 0)
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	if (k == 0)
		printf("Last digit of %d is %d and is zero\n", n, k);
	if (k < 6 && k != 0)
		printf("Last digit of %d is %d less than six and not zero\n", n, k);
	return (0);
}

