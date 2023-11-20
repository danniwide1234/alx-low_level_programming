#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: point to the first element in list
 * Description: head to NULL
 *
 * Return: (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *storage;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while ((*head)->next != NULL)
	{
		storage = (*head)->next;
		free(*head);
		*head = storage;
	}
	free(*head);
	*head = NULL;
}
