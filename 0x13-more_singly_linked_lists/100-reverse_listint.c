#include "lists.h"

/**
 * reverse_listint - function that reverses
 * a listint_t linked list
 *
 * @head: head pointer
 *
 * Return: reversed list element being pointed to
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *storage;
	listint_t *reversed_head = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		storage = *head;
		*head = storage->next;
		storage->next = reversed_head;
		reversed_head = storage;
	}
	*head = reversed_head;
	return (*head);
}
