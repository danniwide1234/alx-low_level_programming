#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable
 * of type struct dog
 *
 * @d: pointer to address of intialization
 * in question
 * @name: name of intialization in question
 * @age: age of initialization in question
 * @owner: owner of initialization in question
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
