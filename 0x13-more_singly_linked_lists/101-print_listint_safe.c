#include "lists.h"

/**
 * free_listp - Frees a linked list
 * @head: Pointer to the head of a list
 *
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *storage;
	listp_t *now;

	if (head != NULL)
		now = *head;
	while ((storage = now) != NULL)
	{
		now = now->next;
		free(storage);
	}

	*head = NULL;
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to a list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *zptr, *latest, *sum;

	zptr = NULL;
	while (head != NULL)
	{
		latest = malloc(sizeof(listp_t));
		if (latest == NULL)
		{
			free_listint(&zptr);
			exit(98);
		}
		latest->p = (void *)head;
		latest->next = zptr;
		zptr = latest;

		sum = zptr;
		while (sum->next != NULL)
			sum = sum->next;

			if (head == sum->p)
			{
				printf("-> [p] %p\n", (void *)head);
				free_listint(&zptr);
				return (nnodes);
			}
			printf("-> [p] %p\n", (void *)head);
			head = head->next;
			nnodes++;
	}
	free_listint(&zptr);
	return (nnodes);
}
