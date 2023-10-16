#include "main.h"

/**
 * _strcpy - function to copy a string
 *
 * @dest: value for destination
 * @src: value for source
 *
 * Return: (void)
 */

char *_strcpy(char *dest, char *src)
{
int h;

for (h = 0; src[h] != '\0'; h++)
{
dest[h] = src[h];
}
dest[h++] = '\0';
return (dest);
}
