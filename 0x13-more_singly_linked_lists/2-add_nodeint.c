#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 *
 * @head: point to the first node as the head
 * pointer
 * @n: new nodes to be created
 *
 * Return: head pointer is returned
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest_node;

	if (head == NULL)
	{
		return (NULL);
	}
	latest_node = malloc(sizeof(listint_t));
	if (latest_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		latest_node->next = NULL;
	}
	latest_node->n = n;
	latest_node->next = *head;
	*head = latest_node;
	return (*head);
}
