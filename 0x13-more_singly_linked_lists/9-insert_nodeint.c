#include "lists.h"

/**
 * create_latest_node - create the latest or new node
 * @n: value of the node
 *
 * Return: pointer to the node
 */
listint_t *create_latest_node(int n)
{
	listint_t *latest_node;

	latest_node = malloc(sizeof(listint_t));
	if (latest_node == NULL)
	{
		return (NULL);
	}
	latest_node->n = n;
	latest_node->next = NULL;
	return (latest_node);
}

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 *
 * @head: pointer to the first element
 * @idx: index where the new node is to be inserted
 * @n: value of the new node
 *
 * Return: address of the newly created node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *storage;
	listint_t *storage_old;
	listint_t *latest_node;

	storage = *head;
	if (head == NULL)
		return (NULL);
	latest_node = create_latest_node(n);
	if (latest_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = latest_node;
		return (latest_node);
	}
	if (idx == 0)
	{
		latest_node->next = storage;
		*head = latest_node;
		return (latest_node);
	}
	for (m = 0; m < idx - 1 && storage != NULL && idx != 0; m++)
		storage = storage->next;
	if (storage == NULL)
		return (NULL);
	if (idx == 0)
		latest_node->next = storage;
	else
	{
		storage_old = storage->next;
		storage->next = latest_node;
		latest_node->next = storage_old;
	}
	return (latest_node);
}
