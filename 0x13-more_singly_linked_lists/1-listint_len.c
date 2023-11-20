#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 *
 * @h: pointer to the first node, the head pointer
 *
 * Return: element number in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t number;

	if (h == NULL)
	{
		return (0);
	}
	for (number = 0; h != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
