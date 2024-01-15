#include "main.h"

/**
 * _strlen - lenght of a string returned by a program
 *
 * @s: string to be worked on
 *
 * Return: resulting lenght
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
