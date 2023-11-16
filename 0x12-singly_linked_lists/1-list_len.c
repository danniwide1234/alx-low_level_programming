#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 *
 * @h: pointing to the memory area of list_t list
 *
 * Return:elements number in h
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
