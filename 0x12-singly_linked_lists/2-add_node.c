#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 *
 * @head: list_t list pointed to by double pointer
 * @str: new string to to be included
 *
 * Return: pointer to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
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
	fresh->next = (*head);
	(*head) = fresh;

	return (*head);
}
