#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a
 * new node at the end of a list_t list
 *
 * @head: list_t list being pointed to
 * by double pointer
 * @str: string to be included
 *
 * Return: pointer to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *store = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	fresh = malloc(sizeof(list_t));
	if (!fresh)
	{
		return (NULL);
	}
	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (store->next)
	{
		store = store->next;
	}
	store->next = fresh;
	return (fresh);
}
