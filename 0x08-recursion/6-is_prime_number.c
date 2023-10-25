#include "main.h"
#include "stdio.h"

int check_prime(int n, int k);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * 
 * @n: the number to be worked upon
 *
 * Return: value of integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * is_prime_number - to check if the number is a prime
 * 
 * @n: number to be work upon
 *@k: item to be iterated
*
* Return: if result is prime return 1 otherwise 0
*/

int check_prime(int n, int k)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % k == 0 && k > 1)
	{
		return (0);
	}
	if ((n / k) < k)
	{
		return (1);
	}
	return (check_prime(n, k + 1));
}

