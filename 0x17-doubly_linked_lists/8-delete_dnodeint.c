#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index of a dlistint_t linked list
 *
 * @head: node head
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node;
	unsigned int measure;

	if (*head == NULL)
		return (-1);

	new_node = *head;
	if (index == 0)
	{
		*head = new_node->next;
		if (new_node->next != NULL)
		{
			new_node->next->prev = NULL;
		}
		free(new_node);
		return (1);
	}
	for (measure = 0; new_node != NULL && measure < index - 1 ; measure++)
	{
		new_node = new_node->next;
	}
	if (new_node == NULL || new_node->next == NULL)
	{
		return (-1);
	}

	if (new_node->next->next != NULL)
	{
		new_node->next = new_node->next->next;
		free(new_node->next->prev);
		new_node->next->prev = new_node;
		return (1);
	}
	else
	{
		free(new_node->next);
		new_node->next = NULL;
		return (1);
	}
	return (-1);
}
