#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list,and returns the head node’s data (n)
 *
 * @head: point to the head list
 *
 * Return: (int)
 */

int pop_listint(listint_t **head)
{
	int p;
	listint_t *storage;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	p = (*head)->n;
	storage = *head;
	*head = (*head)->next;
	free(storage);
	return (p);
}
