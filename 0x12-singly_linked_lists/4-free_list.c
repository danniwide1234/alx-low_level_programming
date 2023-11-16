#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: list_t list to be worked on
 * to achieve function success
 */

void free_list(list_t *head)
{
	list_t *store;

	while (head)
	{
		store = head->next;
		free(head->str);
		free(head);
		head = store;
	}
}
