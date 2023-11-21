#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 *
 * @head: point to list beginning
 * @index: index of free node
 *
 * Return: -1 if unsuccesful but 1 if successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *storage;
	listint_t *node;

	storage = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node = storage->next;
		free(storage);
		*head = node;
	}
	else
	{
		for (k = 0; k < index - 1 && storage != NULL && storage->next != NULL; k++)
			storage = storage->next;
		if (storage == NULL || storage->next == NULL)
			return (-1);

		node = storage->next->next;
		free(storage->next);
		storage->next = node;
	}
	return (1);
}
