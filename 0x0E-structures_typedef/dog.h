#ifndef DOG_H
#define DOG_H
#include <string.h>

/**
 * struct dog - Info of dog under review
 * @name: name of dog under review
 * @age: age of dog under review
 * @owner: owner of dog under review
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
