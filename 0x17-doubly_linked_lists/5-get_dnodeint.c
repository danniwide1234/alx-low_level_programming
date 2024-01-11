#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list
 *
 * @head: list head
 * @index: nth node index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	k = 0;

	while (head != NULL)
	{
		if (k == index)
			break;
		head = head->next;
		k++;
	}

	return (head);
}
