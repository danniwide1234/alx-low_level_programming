#include "lists.h"

/**
 * dlistint_len - Funtion that returns the number of elements in
 * a double linked list
 *
 * @h: list head
 * Return: nodes number
 */

size_t dlistint_len(const dlistint_t *h)
{
	int measure;

	measure = 0;

	if (h == NULL)
		return (measure);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		measure++;
		h = h->next;
	}

	return (measure);
}
