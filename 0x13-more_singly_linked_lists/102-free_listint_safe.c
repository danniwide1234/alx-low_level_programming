#include "lists.h"

/**
 * free_listint_safe - Function that frees a linked list
 * @h: first node in the linked list being pointed to
 *
 * Return: elements  number in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int gap;
	listint_t *storage;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gap = *h - (*h)->next;
		if (gap > 0)
		{
			storage = (*h)->next;
			free(*h);
			*h = storage;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
