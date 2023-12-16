#include "lists.h"
#include <stdio.h>

size_t looped_listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_length - number of unique nodes counted
 * in a looped listint_t linked list.
 * @head: check a pointer to the head of the listint_t.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_length(const listint_t *head)
{
	const listint_t *turtle, *leopard;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	leopard = (head->next)->next;

	while (leopard)
	{
		if (leopard == turtle)
		{
			turtle = head;
			while (turtle != leopard)
			{
				nodes++;
				turtle = turtle->next;
				leopard = leopard->next;
			}

			turtle = turtle->next;
			while (turtle != leopard)
			{
				nodes++;
				turtle = turtle->next;
			}

			return (nodes);
		}

		turtle = turtle->next;
		leopard = (leopard->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Function that Prints a listint_t list safely.
 * @head: head of the listint_t list being pointed to.
 *
 * Return: nodes number in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, count = 0;

	nodes = looped_listint_length(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (count = 0; count < nodes; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
