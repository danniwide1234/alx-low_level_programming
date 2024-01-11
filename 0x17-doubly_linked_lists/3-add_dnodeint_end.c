#include "lists.h"

/**
 *  add_dnodeint_end -  Function that adds a new
 * node at the end of a dlistint_t list.
 * @head: head of the list to be double pointed
 * @n: added integer to the new node
 *
 * Return:  new element address, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;

	fresh_node = malloc(sizeof(dlistint_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;

	if (*head == NULL)
	{
		fresh_node->prev = NULL;
		*head = fresh_node;
		return (fresh_node);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = fresh_node;
	fresh_node->prev = *head;

	return (fresh_node);
}
