#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: first node of the linked list being pointed to
 * Return: fresh_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *m = NULL;
	const listint_t *n = NULL;
	size_t number = 0;
	size_t fresh;

	m = head;
	while (n)
	{
		printf("[%p] %d\n", (void *)m, m->n);
		number++;
		m = m->next;
		n = head;
		fresh = 0;
		while (fresh < number)
		{
			if (m == n)
			{
				printf("-> [%p] %d\n", (void *)m, m->n);
				return (number);
			}
			n = n->next;
			fresh++;
		}
		if (!head)
			exit(98);
	}
	return (number);
}
