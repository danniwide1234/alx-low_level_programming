#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list
 *
 * @head: point to the list
 *
 * Return: (int); add
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
