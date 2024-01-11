#include "lists.h"

/**
 * print_dlistint - Function that prints
 * all the elements of a dlistint_t list.
 * @h: head of the list pointer
 *
 * Return: nodes number
 */

size_t print_dlistint(const dlistint_t *h)
{

	int measure = 0;

	if (h == NULL)
		return (measure);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		measure++;
	}

	return (measure);
}
