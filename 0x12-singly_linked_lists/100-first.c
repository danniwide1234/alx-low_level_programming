#include <stdio.h>

/**
 * __attribute__((constructor)) - Function that runs before main.
 */
void tempt(void) __attribute__((constructor));

/**
 * tempt - Function that prints a sentence before main.
 */
void tempt(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
