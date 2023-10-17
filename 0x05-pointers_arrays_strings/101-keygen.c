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
	char password[84];
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
		a = (add -2772) / 2;
		b = (add -2772) / 2;

		if ((add - 2772) % 2 != 0)
			a++;
		
		for (y = 0; password[y]; y++)
		{
			if (password[y] >= (33 + b))
			{
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}	
