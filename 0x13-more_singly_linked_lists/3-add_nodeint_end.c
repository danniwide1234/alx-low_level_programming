#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list
 *
 * @head: pointer to the head of the list
 * @n: info to be added to list
 *
 * Return: address of the element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *storage;

	(void)storage;

	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
	{
		return (NULL);
	}
	latest->n = n;
	latest->next = NULL;
	storage = *head;
	if (*head == NULL)
	{
		*head = latest;
	}
	else
	{
		while (storage->next != NULL)
		{
			storage = storage->next;
		}
		storage->next = latest;
	}
	return (*head);
}


