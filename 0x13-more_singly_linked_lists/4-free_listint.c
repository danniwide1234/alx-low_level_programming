#include "lists.h"

/**
 * free_listint -  function that frees
 * a listint_t list
 *
 * @head: point to the first note of the list
 *
 * Return: (void)
 */

void free_listint(listint_t *head)
{
	listint_t *storage;

	while ((storage = head) != NULL)
	{
		head = head->next;
		free(storage);
	}
}
