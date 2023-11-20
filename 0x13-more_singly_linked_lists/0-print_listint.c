#include "lists.h"
#include <stdio.h>


/**
 * print_listint - function that prints all the elements
 * of a listint_t list
 *
 * @h: headpointer showcasing the list
 *
 * Return: Nodes no in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
