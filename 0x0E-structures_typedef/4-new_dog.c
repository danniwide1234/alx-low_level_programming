#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * _strlen - Calculate the length of a string.
 * @str: Pointer to the input string.
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcp - Copy a string to a destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination buffer.
 */
char *_strcp(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';

	return (dest);
}

/**
 * new_dog - Create a new dog structure.
 * @name: Name to set.
 * @age: Age to set.
 * @owner: Owner to set.
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length_name, length_owner;

	length_name = _strlen(name);
	length_owner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (length_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	_strcp(dog->name, name);

	dog->owner = malloc(sizeof(char) * (length_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcp(dog->owner, owner);
	dog->age = age;

	return (dog);
}
