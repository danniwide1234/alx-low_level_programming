#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: pointer to the string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int b;
	int c;
	char info1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inforot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (s[b] == info1[c])
			{
				s[b] = inforot[c];
				break;
			}
		}
	}
	return (s);
}
