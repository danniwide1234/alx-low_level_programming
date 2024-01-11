#include "lists.h"

/**
 *  sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: head of the list of double pointer
 *
 * Return: return 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int add = 0;
	dlistint_t *k;

	for (k = head; k != NULL; k = k->next)
	{
		add += k->n;
	}

	return (add);
}
