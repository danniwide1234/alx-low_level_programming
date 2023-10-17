#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for compilation
 * 
 * program 101-crackme
 *
 * Return: (void)
 */

int main(void)
{
	char password[85];
	int y = 0;
	int add = 0;
	int a;
	int b;

	srand(time(0));

	while (add < 2772)
	{
		password[y] = 33 + rand() % 94;
		add += password[y++];
	}
	password[y] = '\0';
	
	if (add !=2772)
	{
		a = 2772 - add;
		b = a;
		
		for (y = 0; password[y]; y++)
		{
			if (password[y] >= 33 && password[y] <= 126)
			{
				int diff = 126 - password[y];
				if (diff < b)
				{
					password[y] = 126;
					b -= diff;
					
				}
				else
				{
					password[y] += b;
					break;
				}
			}
		}
	}
	
	printf("%s\n", password);
	return (0);
}	
