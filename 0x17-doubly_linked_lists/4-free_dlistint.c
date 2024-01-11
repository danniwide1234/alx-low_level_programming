#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: list head
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *storage;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((storage = head) != NULL)
	{
		head = head->next;
		free(storage);
	}
}
