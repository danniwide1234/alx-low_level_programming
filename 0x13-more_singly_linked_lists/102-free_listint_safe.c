#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: list head
 *
 * Return: void
 */

void free_listp2(listp_t **head)
{
	listp_t *storage;
	listp_t *now;

	if (head != NULL)
	{
		now = *head;
		while ((storage = now) != NULL)
		{
			now = now->next;
			free(storage);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that
 * frees a listint_t list
 *
 * @h: pointer
 *
 * Return: list sized freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *latest, *sum;
	listint_t *now;

	hptr = NULL;
	while (*h != NULL)
	{
		latest = malloc(sizeof(listp_t));
		if (latest == NULL)
			exit(98);
		latest->p = (void *)*h;
		latest->next = hptr;
		hptr = latest;

		sum = hptr;
		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}
		now = *h;
		*h = (*h)->next;
		free(now);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
