#include "lists.h"

/**
 * add_dnodeint - Function that adds a new
 * node at the beginning of a dlistint_t list.
 * @head: head of the list having double pointer
 * @n: added data
 *
 * Return: new element address, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh_node;

	fresh_node = malloc(sizeof(dlistint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = *head;
	fresh_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = fresh_node;
	*head = fresh_node;
	return (fresh_node);
}
